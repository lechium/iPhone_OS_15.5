//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface CHSMutableWidgetExtensionInfo
{
}

+ (id)new;	// IMP=0x0000000000018049
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001860a
@property(copy, nonatomic) NSArray *nominatedContainerBundleIdentifiers; // @dynamic nominatedContainerBundleIdentifiers;
@property(copy, nonatomic) NSArray *timelineURLs; // @dynamic timelineURLs;
@property(copy, nonatomic) NSArray *placeholderURLs; // @dynamic placeholderURLs;
@property(copy, nonatomic) NSArray *snapshotURLs; // @dynamic snapshotURLs;
@property(copy, nonatomic) NSArray *configurations; // @dynamic configurations;
@property(copy, nonatomic) NSArray *descriptors; // @dynamic descriptors;
@property(copy, nonatomic) NSDictionary *entitlements; // @dynamic entitlements;
@property(nonatomic) _Bool allowsMixedLocalizations; // @dynamic allowsMixedLocalizations;
@property(copy, nonatomic) NSArray *availableLocalizations; // @dynamic availableLocalizations;
@property(nonatomic) _Bool wantsLocation; // @dynamic wantsLocation;
@property(nonatomic) _Bool isDevelopmentExtension; // @dynamic isDevelopmentExtension;
@property(copy, nonatomic) NSString *dataProtectionLevel; // @dynamic dataProtectionLevel;
@property(copy, nonatomic) NSURL *systemDataContainerURL; // @dynamic systemDataContainerURL;
@property(copy, nonatomic) NSURL *containerURL; // @dynamic containerURL;
@property(copy, nonatomic) NSURL *bundleURL; // @dynamic bundleURL;
@property(copy, nonatomic) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(copy, nonatomic) NSString *version; // @dynamic version;
@property(copy, nonatomic) NSString *containerBundleIdentifier; // @dynamic containerBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
- (id)init;	// IMP=0x000000000001805a

@end

