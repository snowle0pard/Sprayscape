// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play Developer API (androidpublisher/v2)
// Description:
//   Lets Android application developers access their Google Play accounts.
// Documentation:
//   https://developers.google.com/android-publisher

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAndroidPublisher_Apk;
@class GTLRAndroidPublisher_ApkBinary;
@class GTLRAndroidPublisher_ApkListing;
@class GTLRAndroidPublisher_Comment;
@class GTLRAndroidPublisher_DeveloperComment;
@class GTLRAndroidPublisher_Entitlement;
@class GTLRAndroidPublisher_ExpansionFile;
@class GTLRAndroidPublisher_ExternallyHostedApk;
@class GTLRAndroidPublisher_ExternallyHostedApkUsesPermission;
@class GTLRAndroidPublisher_Image;
@class GTLRAndroidPublisher_InAppProduct;
@class GTLRAndroidPublisher_InAppProductListing;
@class GTLRAndroidPublisher_InAppProductListings;
@class GTLRAndroidPublisher_InAppProductPrices;
@class GTLRAndroidPublisher_InappproductsBatchRequestEntry;
@class GTLRAndroidPublisher_InappproductsBatchResponseEntry;
@class GTLRAndroidPublisher_InappproductsInsertRequest;
@class GTLRAndroidPublisher_InappproductsInsertResponse;
@class GTLRAndroidPublisher_InappproductsUpdateRequest;
@class GTLRAndroidPublisher_InappproductsUpdateResponse;
@class GTLRAndroidPublisher_Listing;
@class GTLRAndroidPublisher_MonthDay;
@class GTLRAndroidPublisher_PageInfo;
@class GTLRAndroidPublisher_Price;
@class GTLRAndroidPublisher_Prorate;
@class GTLRAndroidPublisher_Review;
@class GTLRAndroidPublisher_ReviewReplyResult;
@class GTLRAndroidPublisher_Season;
@class GTLRAndroidPublisher_SubscriptionDeferralInfo;
@class GTLRAndroidPublisher_Timestamp;
@class GTLRAndroidPublisher_TokenPagination;
@class GTLRAndroidPublisher_Track;
@class GTLRAndroidPublisher_UserComment;

NS_ASSUME_NONNULL_BEGIN

/**
 *  GTLRAndroidPublisher_Apk
 */
@interface GTLRAndroidPublisher_Apk : GTLRObject

/** Information about the binary payload of this APK. */
@property(strong, nullable) GTLRAndroidPublisher_ApkBinary *binary;

/**
 *  The version code of the APK, as specified in the APK's manifest file.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *versionCode;

@end


/**
 *  Represents the binary payload of an APK.
 */
@interface GTLRAndroidPublisher_ApkBinary : GTLRObject

/**
 *  A sha1 hash of the APK payload, encoded as a hex string and matching the
 *  output of the sha1sum command.
 */
@property(copy, nullable) NSString *sha1;

@end


/**
 *  GTLRAndroidPublisher_ApkListing
 */
@interface GTLRAndroidPublisher_ApkListing : GTLRObject

/** The language code, in BCP 47 format (eg "en-US"). */
@property(copy, nullable) NSString *language;

/** Describe what's new in your APK. */
@property(copy, nullable) NSString *recentChanges;

@end


/**
 *  GTLRAndroidPublisher_ApkListingsListResponse
 */
@interface GTLRAndroidPublisher_ApkListingsListResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidpublisher#apkListingsListResponse".
 */
@property(copy, nullable) NSString *kind;

@property(strong, nullable) NSArray<GTLRAndroidPublisher_ApkListing *> *listings;

@end


/**
 *  GTLRAndroidPublisher_ApksAddExternallyHostedRequest
 */
@interface GTLRAndroidPublisher_ApksAddExternallyHostedRequest : GTLRObject

/** The definition of the externally-hosted APK and where it is located. */
@property(strong, nullable) GTLRAndroidPublisher_ExternallyHostedApk *externallyHostedApk;

@end


/**
 *  GTLRAndroidPublisher_ApksAddExternallyHostedResponse
 */
@interface GTLRAndroidPublisher_ApksAddExternallyHostedResponse : GTLRObject

/** The definition of the externally-hosted APK and where it is located. */
@property(strong, nullable) GTLRAndroidPublisher_ExternallyHostedApk *externallyHostedApk;

@end


/**
 *  GTLRAndroidPublisher_ApksListResponse
 */
@interface GTLRAndroidPublisher_ApksListResponse : GTLRObject

@property(strong, nullable) NSArray<GTLRAndroidPublisher_Apk *> *apks;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidpublisher#apksListResponse".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  GTLRAndroidPublisher_AppDetails
 */
@interface GTLRAndroidPublisher_AppDetails : GTLRObject

/** The user-visible support email for this app. */
@property(copy, nullable) NSString *contactEmail;

/** The user-visible support telephone number for this app. */
@property(copy, nullable) NSString *contactPhone;

/** The user-visible website for this app. */
@property(copy, nullable) NSString *contactWebsite;

/** Default language code, in BCP 47 format (eg "en-US"). */
@property(copy, nullable) NSString *defaultLanguage;

@end


/**
 *  Represents an edit of an app. An edit allows clients to make multiple
 *  changes before committing them in one operation.
 */
@interface GTLRAndroidPublisher_AppEdit : GTLRObject

/**
 *  The time at which the edit will expire and will be no longer valid for use
 *  in any subsequent API calls (encoded as seconds since the Epoch).
 */
@property(copy, nullable) NSString *expiryTimeSeconds;

/**
 *  The ID of the edit that can be used in subsequent API calls.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(copy, nullable) NSString *identifier;

@end


/**
 *  GTLRAndroidPublisher_Comment
 */
@interface GTLRAndroidPublisher_Comment : GTLRObject

/** A comment from a developer. */
@property(strong, nullable) GTLRAndroidPublisher_DeveloperComment *developerComment;

/** A comment from a user. */
@property(strong, nullable) GTLRAndroidPublisher_UserComment *userComment;

@end


/**
 *  GTLRAndroidPublisher_DeveloperComment
 */
@interface GTLRAndroidPublisher_DeveloperComment : GTLRObject

/** The last time at which this comment was updated. */
@property(strong, nullable) GTLRAndroidPublisher_Timestamp *lastModified;

/** The content of the comment, i.e. reply body. */
@property(copy, nullable) NSString *text;

@end


/**
 *  An Entitlement resource indicates a user's current entitlement to an inapp
 *  item or subscription.
 */
@interface GTLRAndroidPublisher_Entitlement : GTLRObject

/**
 *  This kind represents an entitlement object in the androidpublisher service.
 */
@property(copy, nullable) NSString *kind;

/** The SKU of the product. */
@property(copy, nullable) NSString *productId;

/**
 *  The type of the inapp product. Possible values are:
 *  - In-app item: "inapp"
 *  - Subscription: "subs"
 */
@property(copy, nullable) NSString *productType;

/**
 *  The token which can be verified using the subscriptions or products API.
 */
@property(copy, nullable) NSString *token;

@end


/**
 *  GTLRAndroidPublisher_EntitlementsListResponse
 */
@interface GTLRAndroidPublisher_EntitlementsListResponse : GTLRObject

@property(strong, nullable) GTLRAndroidPublisher_PageInfo *pageInfo;
@property(strong, nullable) NSArray<GTLRAndroidPublisher_Entitlement *> *resources;
@property(strong, nullable) GTLRAndroidPublisher_TokenPagination *tokenPagination;

@end


/**
 *  GTLRAndroidPublisher_ExpansionFile
 */
@interface GTLRAndroidPublisher_ExpansionFile : GTLRObject

/**
 *  If set this field indicates that this APK has an Expansion File uploaded to
 *  it: this APK does not reference another APK's Expansion File. The field's
 *  value is the size of the uploaded Expansion File in bytes.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *fileSize;

/**
 *  If set this APK's Expansion File references another APK's Expansion File.
 *  The file_size field will not be set.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *referencesVersion;

@end


/**
 *  GTLRAndroidPublisher_ExpansionFilesUploadResponse
 */
@interface GTLRAndroidPublisher_ExpansionFilesUploadResponse : GTLRObject

@property(strong, nullable) GTLRAndroidPublisher_ExpansionFile *expansionFile;

@end


/**
 *  Defines an APK available for this application that is hosted externally and
 *  not uploaded to Google Play. This function is only available to enterprises
 *  who are using Google Play for Work, and whos application is restricted to
 *  the enterprise private channel
 */
@interface GTLRAndroidPublisher_ExternallyHostedApk : GTLRObject

/** The application label. */
@property(copy, nullable) NSString *applicationLabel;

/**
 *  A certificate (or array of certificates if a certificate-chain is used) used
 *  to signed this APK, represented as a base64 encoded byte array.
 */
@property(strong, nullable) NSArray<NSString *> *certificateBase64s;

/** The URL at which the APK is hosted. This must be an https URL. */
@property(copy, nullable) NSString *externallyHostedUrl;

/**
 *  The SHA1 checksum of this APK, represented as a base64 encoded byte array.
 */
@property(copy, nullable) NSString *fileSha1Base64;

/**
 *  The SHA256 checksum of this APK, represented as a base64 encoded byte array.
 */
@property(copy, nullable) NSString *fileSha256Base64;

/**
 *  The file size in bytes of this APK.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *fileSize;

/** The icon image from the APK, as a base64 encoded byte array. */
@property(copy, nullable) NSString *iconBase64;

/**
 *  The maximum SDK supported by this APK (optional).
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *maximumSdk;

/**
 *  The minimum SDK targeted by this APK.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *minimumSdk;

/** The native code environments supported by this APK (optional). */
@property(strong, nullable) NSArray<NSString *> *nativeCodes;

/** The package name. */
@property(copy, nullable) NSString *packageName;

/** The features required by this APK (optional). */
@property(strong, nullable) NSArray<NSString *> *usesFeatures;

/** The permissions requested by this APK. */
@property(strong, nullable) NSArray<GTLRAndroidPublisher_ExternallyHostedApkUsesPermission *> *usesPermissions;

/**
 *  The version code of this APK.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *versionCode;

/** The version name of this APK. */
@property(copy, nullable) NSString *versionName;

@end


/**
 *  A permission used by this APK.
 */
@interface GTLRAndroidPublisher_ExternallyHostedApkUsesPermission : GTLRObject

/**
 *  Optionally, the maximum SDK version for which the permission is required.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *maxSdkVersion;

/** The name of the permission requested. */
@property(copy, nullable) NSString *name;

@end


/**
 *  GTLRAndroidPublisher_Image
 */
@interface GTLRAndroidPublisher_Image : GTLRObject

/**
 *  A unique id representing this image.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(copy, nullable) NSString *identifier;

/** A sha1 hash of the image that was uploaded. */
@property(copy, nullable) NSString *sha1;

/** A URL that will serve a preview of the image. */
@property(copy, nullable) NSString *url;

@end


/**
 *  GTLRAndroidPublisher_ImagesDeleteAllResponse
 */
@interface GTLRAndroidPublisher_ImagesDeleteAllResponse : GTLRObject

@property(strong, nullable) NSArray<GTLRAndroidPublisher_Image *> *deleted;

@end


/**
 *  GTLRAndroidPublisher_ImagesListResponse
 */
@interface GTLRAndroidPublisher_ImagesListResponse : GTLRObject

@property(strong, nullable) NSArray<GTLRAndroidPublisher_Image *> *images;

@end


/**
 *  GTLRAndroidPublisher_ImagesUploadResponse
 */
@interface GTLRAndroidPublisher_ImagesUploadResponse : GTLRObject

@property(strong, nullable) GTLRAndroidPublisher_Image *image;

@end


/**
 *  GTLRAndroidPublisher_InAppProduct
 */
@interface GTLRAndroidPublisher_InAppProduct : GTLRObject

/**
 *  The default language of the localized data, as defined by BCP 47. e.g.
 *  "en-US", "en-GB".
 */
@property(copy, nullable) NSString *defaultLanguage;

/**
 *  Default price cannot be zero. In-app products can never be free. Default
 *  price is always in the developer's Checkout merchant currency.
 */
@property(strong, nullable) GTLRAndroidPublisher_Price *defaultPrice;

/** List of localized title and description data. */
@property(strong, nullable) GTLRAndroidPublisher_InAppProductListings *listings;

/** The package name of the parent app. */
@property(copy, nullable) NSString *packageName;

/**
 *  Prices per buyer region. None of these prices should be zero. In-app
 *  products can never be free.
 */
@property(strong, nullable) GTLRAndroidPublisher_InAppProductPrices *prices;

/** Purchase type enum value. Unmodifiable after creation. */
@property(copy, nullable) NSString *purchaseType;

/**
 *  Definition of a season for a seasonal subscription. Can be defined only for
 *  yearly subscriptions.
 */
@property(strong, nullable) GTLRAndroidPublisher_Season *season;

/** The stock-keeping-unit (SKU) of the product, unique within an app. */
@property(copy, nullable) NSString *sku;

@property(copy, nullable) NSString *status;

/**
 *  Subscription period, specified in ISO 8601 format. Acceptable values are
 *  "P1W" (one week), "P1M" (one month), "P3M" (three months), "P6M" (six
 *  months), and "P1Y" (one year).
 */
@property(copy, nullable) NSString *subscriptionPeriod;

/**
 *  Trial period, specified in ISO 8601 format. Acceptable values are anything
 *  between "P7D" (seven days) and "P999D" (999 days). Seasonal subscriptions
 *  cannot have a trial period.
 */
@property(copy, nullable) NSString *trialPeriod;

@end


/**
 *  List of localized title and description data.
 *
 *  @note This class is documented as having more properties of
 *        GTLRAndroidPublisher_InAppProductListing. Use @c -additionalJSONKeys
 *        and @c -additionalPropertyForName: to get the list of properties and
 *        then fetch them; or @c -additionalProperties to fetch them all at
 *        once.
 */
@interface GTLRAndroidPublisher_InAppProductListings : GTLRObject
@end


/**
 *  Prices per buyer region. None of these prices should be zero. In-app
 *  products can never be free.
 *
 *  @note This class is documented as having more properties of
 *        GTLRAndroidPublisher_Price. Use @c -additionalJSONKeys and @c
 *        -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRAndroidPublisher_InAppProductPrices : GTLRObject
@end


/**
 *  GTLRAndroidPublisher_InAppProductListing
 */
@interface GTLRAndroidPublisher_InAppProductListing : GTLRObject

/**
 *  descriptionProperty
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(copy, nullable) NSString *descriptionProperty;

@property(copy, nullable) NSString *title;

@end


/**
 *  GTLRAndroidPublisher_InappproductsBatchRequest
 */
@interface GTLRAndroidPublisher_InappproductsBatchRequest : GTLRObject

@property(strong, nullable) NSArray<GTLRAndroidPublisher_InappproductsBatchRequestEntry *> *entrys;

@end


/**
 *  GTLRAndroidPublisher_InappproductsBatchRequestEntry
 */
@interface GTLRAndroidPublisher_InappproductsBatchRequestEntry : GTLRObject

/**
 *  batchId
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(strong, nullable) NSNumber *batchId;

@property(strong, nullable) GTLRAndroidPublisher_InappproductsInsertRequest *inappproductsinsertrequest;
@property(strong, nullable) GTLRAndroidPublisher_InappproductsUpdateRequest *inappproductsupdaterequest;
@property(copy, nullable) NSString *methodName;

@end


/**
 *  GTLRAndroidPublisher_InappproductsBatchResponse
 */
@interface GTLRAndroidPublisher_InappproductsBatchResponse : GTLRObject

@property(strong, nullable) NSArray<GTLRAndroidPublisher_InappproductsBatchResponseEntry *> *entrys;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidpublisher#inappproductsBatchResponse".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  GTLRAndroidPublisher_InappproductsBatchResponseEntry
 */
@interface GTLRAndroidPublisher_InappproductsBatchResponseEntry : GTLRObject

/**
 *  batchId
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(strong, nullable) NSNumber *batchId;

@property(strong, nullable) GTLRAndroidPublisher_InappproductsInsertResponse *inappproductsinsertresponse;
@property(strong, nullable) GTLRAndroidPublisher_InappproductsUpdateResponse *inappproductsupdateresponse;

@end


/**
 *  GTLRAndroidPublisher_InappproductsInsertRequest
 */
@interface GTLRAndroidPublisher_InappproductsInsertRequest : GTLRObject

@property(strong, nullable) GTLRAndroidPublisher_InAppProduct *inappproduct;

@end


/**
 *  GTLRAndroidPublisher_InappproductsInsertResponse
 */
@interface GTLRAndroidPublisher_InappproductsInsertResponse : GTLRObject

@property(strong, nullable) GTLRAndroidPublisher_InAppProduct *inappproduct;

@end


/**
 *  GTLRAndroidPublisher_InappproductsListResponse
 */
@interface GTLRAndroidPublisher_InappproductsListResponse : GTLRObject

@property(strong, nullable) NSArray<GTLRAndroidPublisher_InAppProduct *> *inappproduct;

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidpublisher#inappproductsListResponse".
 */
@property(copy, nullable) NSString *kind;

@property(strong, nullable) GTLRAndroidPublisher_PageInfo *pageInfo;
@property(strong, nullable) GTLRAndroidPublisher_TokenPagination *tokenPagination;

@end


/**
 *  GTLRAndroidPublisher_InappproductsUpdateRequest
 */
@interface GTLRAndroidPublisher_InappproductsUpdateRequest : GTLRObject

@property(strong, nullable) GTLRAndroidPublisher_InAppProduct *inappproduct;

@end


/**
 *  GTLRAndroidPublisher_InappproductsUpdateResponse
 */
@interface GTLRAndroidPublisher_InappproductsUpdateResponse : GTLRObject

@property(strong, nullable) GTLRAndroidPublisher_InAppProduct *inappproduct;

@end


/**
 *  GTLRAndroidPublisher_Listing
 */
@interface GTLRAndroidPublisher_Listing : GTLRObject

/**
 *  Full description of the app; this may be up to 4000 characters in length.
 */
@property(copy, nullable) NSString *fullDescription;

/** Language localization code (for example, "de-AT" for Austrian German). */
@property(copy, nullable) NSString *language;

/**
 *  Short description of the app (previously known as promo text); this may be
 *  up to 80 characters in length.
 */
@property(copy, nullable) NSString *shortDescription;

/** App's localized title. */
@property(copy, nullable) NSString *title;

/** URL of a promotional YouTube video for the app. */
@property(copy, nullable) NSString *video;

@end


/**
 *  GTLRAndroidPublisher_ListingsListResponse
 */
@interface GTLRAndroidPublisher_ListingsListResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidpublisher#listingsListResponse".
 */
@property(copy, nullable) NSString *kind;

@property(strong, nullable) NSArray<GTLRAndroidPublisher_Listing *> *listings;

@end


/**
 *  GTLRAndroidPublisher_MonthDay
 */
@interface GTLRAndroidPublisher_MonthDay : GTLRObject

/**
 *  Day of a month, value in [1, 31] range. Valid range depends on the specified
 *  month.
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(strong, nullable) NSNumber *day;

/**
 *  Month of a year. e.g. 1 = JAN, 2 = FEB etc.
 *
 *  Uses NSNumber of unsignedIntValue.
 */
@property(strong, nullable) NSNumber *month;

@end


/**
 *  GTLRAndroidPublisher_PageInfo
 */
@interface GTLRAndroidPublisher_PageInfo : GTLRObject

/**
 *  resultPerPage
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *resultPerPage;

/**
 *  startIndex
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *startIndex;

/**
 *  totalResults
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *totalResults;

@end


/**
 *  GTLRAndroidPublisher_Price
 */
@interface GTLRAndroidPublisher_Price : GTLRObject

/** 3 letter Currency code, as defined by ISO 4217. */
@property(copy, nullable) NSString *currency;

/**
 *  The price in millionths of the currency base unit represented as a string.
 */
@property(copy, nullable) NSString *priceMicros;

@end


/**
 *  A ProductPurchase resource indicates the status of a user's inapp product
 *  purchase.
 */
@interface GTLRAndroidPublisher_ProductPurchase : GTLRObject

/**
 *  The consumption state of the inapp product. Possible values are:
 *  - Yet to be consumed
 *  - Consumed
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *consumptionState;

/**
 *  A developer-specified string that contains supplemental information about an
 *  order.
 */
@property(copy, nullable) NSString *developerPayload;

/**
 *  This kind represents an inappPurchase object in the androidpublisher
 *  service.
 */
@property(copy, nullable) NSString *kind;

/**
 *  The purchase state of the order. Possible values are:
 *  - Purchased
 *  - Cancelled
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *purchaseState;

/**
 *  The time the product was purchased, in milliseconds since the epoch (Jan 1,
 *  1970).
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *purchaseTimeMillis;

@end


/**
 *  GTLRAndroidPublisher_Prorate
 */
@interface GTLRAndroidPublisher_Prorate : GTLRObject

/**
 *  Default price cannot be zero and must be less than the full subscription
 *  price. Default price is always in the developer's Checkout merchant
 *  currency. Targeted countries have their prices set automatically based on
 *  the default_price.
 */
@property(strong, nullable) GTLRAndroidPublisher_Price *defaultPrice;

/** Defines the first day on which the price takes effect. */
@property(strong, nullable) GTLRAndroidPublisher_MonthDay *start;

@end


/**
 *  GTLRAndroidPublisher_Review
 */
@interface GTLRAndroidPublisher_Review : GTLRObject

/** The name of the user who wrote the review. */
@property(copy, nullable) NSString *authorName;

/** A repeated field containing comments for the review. */
@property(strong, nullable) NSArray<GTLRAndroidPublisher_Comment *> *comments;

/** Unique identifier for this review. */
@property(copy, nullable) NSString *reviewId;

@end


/**
 *  GTLRAndroidPublisher_ReviewReplyResult
 */
@interface GTLRAndroidPublisher_ReviewReplyResult : GTLRObject

/** The time at which the reply took effect. */
@property(strong, nullable) GTLRAndroidPublisher_Timestamp *lastEdited;

/** The reply text that was applied. */
@property(copy, nullable) NSString *replyText;

@end


/**
 *  GTLRAndroidPublisher_ReviewsListResponse
 */
@interface GTLRAndroidPublisher_ReviewsListResponse : GTLRObject

@property(strong, nullable) GTLRAndroidPublisher_PageInfo *pageInfo;
@property(strong, nullable) NSArray<GTLRAndroidPublisher_Review *> *reviews;
@property(strong, nullable) GTLRAndroidPublisher_TokenPagination *tokenPagination;

@end


/**
 *  GTLRAndroidPublisher_ReviewsReplyRequest
 */
@interface GTLRAndroidPublisher_ReviewsReplyRequest : GTLRObject

/**
 *  The text to set as the reply. Replies of more than approximately 350
 *  characters will be rejected. HTML tags will be stripped.
 */
@property(copy, nullable) NSString *replyText;

@end


/**
 *  GTLRAndroidPublisher_ReviewsReplyResponse
 */
@interface GTLRAndroidPublisher_ReviewsReplyResponse : GTLRObject

@property(strong, nullable) GTLRAndroidPublisher_ReviewReplyResult *result;

@end


/**
 *  GTLRAndroidPublisher_Season
 */
@interface GTLRAndroidPublisher_Season : GTLRObject

/** Inclusive end date of the recurrence period. */
@property(strong, nullable) GTLRAndroidPublisher_MonthDay *end;

/**
 *  Optionally present list of prorations for the season. Each proration is a
 *  one-off discounted entry into a subscription. Each proration contains the
 *  first date on which the discount is available and the new pricing
 *  information.
 */
@property(strong, nullable) NSArray<GTLRAndroidPublisher_Prorate *> *prorations;

/** Inclusive start date of the recurrence period. */
@property(strong, nullable) GTLRAndroidPublisher_MonthDay *start;

@end


/**
 *  A SubscriptionDeferralInfo contains the data needed to defer a subscription
 *  purchase to a future expiry time.
 */
@interface GTLRAndroidPublisher_SubscriptionDeferralInfo : GTLRObject

/**
 *  The desired next expiry time for the subscription in milliseconds since
 *  Epoch. The given time must be after the current expiry time for the
 *  subscription.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *desiredExpiryTimeMillis;

/**
 *  The expected expiry time for the subscription. If the current expiry time
 *  for the subscription is not the value specified here, the deferral will not
 *  occur.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *expectedExpiryTimeMillis;

@end


/**
 *  A SubscriptionPurchase resource indicates the status of a user's
 *  subscription purchase.
 */
@interface GTLRAndroidPublisher_SubscriptionPurchase : GTLRObject

/**
 *  Whether the subscription will automatically be renewed when it reaches its
 *  current expiry time.
 *
 *  Uses NSNumber of boolValue.
 */
@property(strong, nullable) NSNumber *autoRenewing;

/**
 *  The cancel reason of the subscription, if the subscription is not auto
 *  renewing. Possible values are:
 *  - User cancelled the subscription
 *  - Subscription was cancelled by the system, for example because of a billing
 *  problem
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *cancelReason;

/**
 *  ISO 3166-1 alpha-2 billing country/region code of the user at the time the
 *  subscription was granted.
 */
@property(copy, nullable) NSString *countryCode;

/**
 *  A developer-specified string that contains supplemental information about an
 *  order.
 */
@property(copy, nullable) NSString *developerPayload;

/**
 *  Time at which the subscription will expire, in milliseconds since Epoch.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *expiryTimeMillis;

/**
 *  This kind represents a subscriptionPurchase object in the androidpublisher
 *  service.
 */
@property(copy, nullable) NSString *kind;

/**
 *  The payment state of the subscription. Possible values are:
 *  - Payment pending
 *  - Payment received
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *paymentState;

/**
 *  Price of the subscription, not including tax. Price is expressed in
 *  micro-units, where 1,000,000 micro-units equal one unit of the currency. For
 *  example, if the subscription price is €1.99, price_amount_micros is 1990000.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *priceAmountMicros;

/**
 *  ISO 4217 currency code for the subscription price. For example, if the price
 *  is specified in British pounds sterling, price_currency_code is "GBP".
 */
@property(copy, nullable) NSString *priceCurrencyCode;

/**
 *  Time at which the subscription was granted, in milliseconds since Epoch.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *startTimeMillis;

@end


/**
 *  GTLRAndroidPublisher_SubscriptionPurchasesDeferRequest
 */
@interface GTLRAndroidPublisher_SubscriptionPurchasesDeferRequest : GTLRObject

/** The information about the new desired expiry time for the subscription. */
@property(strong, nullable) GTLRAndroidPublisher_SubscriptionDeferralInfo *deferralInfo;

@end


/**
 *  GTLRAndroidPublisher_SubscriptionPurchasesDeferResponse
 */
@interface GTLRAndroidPublisher_SubscriptionPurchasesDeferResponse : GTLRObject

/**
 *  The new expiry time for the subscription in milliseconds since the Epoch.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *newExpiryTimeMillis NS_RETURNS_NOT_RETAINED;

@end


/**
 *  GTLRAndroidPublisher_Testers
 */
@interface GTLRAndroidPublisher_Testers : GTLRObject

@property(strong, nullable) NSArray<NSString *> *googleGroups;
@property(strong, nullable) NSArray<NSString *> *googlePlusCommunities;

@end


/**
 *  GTLRAndroidPublisher_Timestamp
 */
@interface GTLRAndroidPublisher_Timestamp : GTLRObject

/**
 *  nanos
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *nanos;

/**
 *  seconds
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *seconds;

@end


/**
 *  GTLRAndroidPublisher_TokenPagination
 */
@interface GTLRAndroidPublisher_TokenPagination : GTLRObject

@property(copy, nullable) NSString *nextPageToken;
@property(copy, nullable) NSString *previousPageToken;

@end


/**
 *  GTLRAndroidPublisher_Track
 */
@interface GTLRAndroidPublisher_Track : GTLRObject

@property(copy, nullable) NSString *track;

/**
 *  userFraction
 *
 *  Uses NSNumber of doubleValue.
 */
@property(strong, nullable) NSNumber *userFraction;

/**
 *  versionCodes
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSArray<NSNumber *> *versionCodes;

@end


/**
 *  GTLRAndroidPublisher_TracksListResponse
 */
@interface GTLRAndroidPublisher_TracksListResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "androidpublisher#tracksListResponse".
 */
@property(copy, nullable) NSString *kind;

@property(strong, nullable) NSArray<GTLRAndroidPublisher_Track *> *tracks;

@end


/**
 *  GTLRAndroidPublisher_UserComment
 */
@interface GTLRAndroidPublisher_UserComment : GTLRObject

/**
 *  Integer Android SDK version of the user's device at the time the review was
 *  written, e.g. 23 is Marshmallow. May be absent.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *androidOsVersion;

/**
 *  Integer version code of the app as installed at the time the review was
 *  written. May be absent.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *appVersionCode;

/**
 *  String version name of the app as installed at the time the review was
 *  written. May be absent.
 */
@property(copy, nullable) NSString *appVersionName;

/** Codename for the reviewer's device, e.g. klte, flounder. May be absent. */
@property(copy, nullable) NSString *device;

/** The last time at which this comment was updated. */
@property(strong, nullable) GTLRAndroidPublisher_Timestamp *lastModified;

/**
 *  Language code for the reviewer. This is taken from the device settings so is
 *  not guaranteed to match the language the review is written in. May be
 *  absent.
 */
@property(copy, nullable) NSString *reviewerLanguage;

/**
 *  The star rating associated with the review, from 1 to 5.
 *
 *  Uses NSNumber of intValue.
 */
@property(strong, nullable) NSNumber *starRating;

/**
 *  The content of the comment, i.e. review body. In some cases users have been
 *  able to write a review with separate title and body; in those cases the
 *  title and body are concatenated and separated by a tab character.
 */
@property(copy, nullable) NSString *text;

@end

NS_ASSUME_NONNULL_END
