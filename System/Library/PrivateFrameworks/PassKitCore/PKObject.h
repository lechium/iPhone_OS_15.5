//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSURL, PKContent, PKDataAccessor, PKDisplayProfile, PKDisplayTraitCollection, PKImageSet;

@interface PKObject : NSObject <NSCopying, NSSecureCoding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    PKContent *_content;	// 16 = 0x10
    PKImageSet *_imageSets[8];	// 24 = 0x18
    PKDisplayTraitCollection *_preferredDisplayTraits;	// 88 = 0x58
    _Bool _initializedViaInitWithCoder;	// 96 = 0x60
    NSString *_uniqueID;	// 104 = 0x68
    NSData *_manifestHash;	// 112 = 0x70
    PKDataAccessor *_dataAccessor;	// 120 = 0x78
    PKDisplayProfile *_displayProfile;	// 128 = 0x80
    NSURL *_webServiceURL;	// 136 = 0x88
    NSString *_authenticationToken;	// 144 = 0x90
    NSDate *_signingDate;	// 152 = 0x98
    unsigned long long _settings;	// 160 = 0xa0
    long long _shareCount;	// 168 = 0xa8
    double _preferredImageScale;	// 176 = 0xb0
    NSString *_preferredImageSuffix;	// 184 = 0xb8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000028a9fc
+ (unsigned long long)defaultSettings;	// IMP=0x000000000028a9f4
+ (id)fetchSigningDateForObjectWithFileDataAccessor:(id)arg1 passDictionary:(id)arg2;	// IMP=0x000000000028a839
+ (_Bool)isValidObjectWithFileDataAccessor:(id)arg1 validationOptions:(unsigned long long)arg2 warnings:(id *)arg3 error:(id *)arg4 signingDate:(id *)arg5 passDictionary:(id)arg6;	// IMP=0x000000000028a831
+ (id)dataTypeIdentifier;	// IMP=0x000000000028a829
+ (Class)classForDictionary:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000028a818
+ (Class)resolvingClass;	// IMP=0x000000000028a807
+ (id)_createWithFileDataAccessor:(id)arg1 validationOptions:(unsigned long long)arg2 warnings:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000028907e
+ (id)createWithValidatedFileDataAccessor:(id)arg1;	// IMP=0x0000000000289061
+ (id)createWithFileDataAccessor:(id)arg1 warnings:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000289044
+ (id)createWithFileDataAccessor:(id)arg1 validationOptions:(unsigned long long)arg2 warnings:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000289032
+ (id)createWithFileURL:(id)arg1 warnings:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000288f64
+ (id)createWithData:(id)arg1 warnings:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000288e96
- (void).cxx_destruct;	// IMP=0x000000000028b29f
@property(retain, nonatomic) NSString *preferredImageSuffix; // @synthesize preferredImageSuffix=_preferredImageSuffix;
@property(nonatomic) double preferredImageScale; // @synthesize preferredImageScale=_preferredImageScale;
@property(readonly, nonatomic) _Bool initializedViaInitWithCoder; // @synthesize initializedViaInitWithCoder=_initializedViaInitWithCoder;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) unsigned long long settings; // @synthesize settings=_settings;
@property(copy, nonatomic) NSDate *signingDate; // @synthesize signingDate=_signingDate;
@property(copy, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) NSURL *webServiceURL; // @synthesize webServiceURL=_webServiceURL;
@property(retain, nonatomic) PKDisplayProfile *displayProfile; // @synthesize displayProfile=_displayProfile;
@property(retain, nonatomic) PKDataAccessor *dataAccessor; // @synthesize dataAccessor=_dataAccessor;
@property(copy, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028afc5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000028ad48
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000028aa04
- (void)setMissingImageSetsFromObject:(id)arg1;	// IMP=0x000000000028a933
- (_Bool)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2;	// IMP=0x000000000028a899
- (id)imageSetLoadedIfNeeded:(long long)arg1;	// IMP=0x000000000028a86f
- (id)contentLoadedIfNeeded;	// IMP=0x000000000028a841
- (id)passLocalizedStringForKey:(id)arg1;	// IMP=0x000000000028a784
- (id)dataForBundleResources:(id)arg1;	// IMP=0x000000000028a701
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;	// IMP=0x000000000028a66a
- (void)reloadDisplayProfileOfType:(long long)arg1;	// IMP=0x000000000028a5f0
- (void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)arg1;	// IMP=0x000000000028a5e3
- (id)modificationDate;	// IMP=0x000000000028a522
- (id)serializedFileWrapper;	// IMP=0x000000000028a4d2
- (id)archiveData;	// IMP=0x000000000028a482
- (id)localizedString:(id)arg1;	// IMP=0x000000000028a3ed
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 seids:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000028a353
- (void)downloadRemoteAssetsForSEIDS:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000028a339
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000028a320
- (_Bool)remoteAssetsDownloadedForSEIDs:(id)arg1;	// IMP=0x000000000028a2a9
- (void)noteShared;	// IMP=0x000000000028a24b
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000028a1d9
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000028a167
- (void)_lock_flushLoadedImageSets;	// IMP=0x000000000028a12c
- (void)flushLoadedImageSets;	// IMP=0x000000000028a0fa
- (void)loadImageSetAsync:(long long)arg1 preheat:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000289e0c
- (void)loadImageSetSync:(long long)arg1 preheat:(_Bool)arg2;	// IMP=0x0000000000289cec
- (void)loadCachedImageSet:(long long)arg1;	// IMP=0x0000000000289c2f
- (void)setImageSet:(id)arg1 forImageSetType:(long long)arg2;	// IMP=0x0000000000289be6
- (_Bool)isImageSetLoaded:(long long)arg1;	// IMP=0x0000000000289bac
@property(retain, nonatomic) PKDisplayTraitCollection *preferredDisplayTraits; // @dynamic preferredDisplayTraits;
- (void)flushFormattedFieldValues;	// IMP=0x0000000000289a7a
- (void)flushLoadedContent;	// IMP=0x0000000000289a66
- (void)loadContentAsyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000289728
- (void)loadContentSync;	// IMP=0x000000000028969d
- (_Bool)isContentLoaded;	// IMP=0x0000000000289670
- (void)setContent:(id)arg1;	// IMP=0x000000000028962b
- (id)content;	// IMP=0x00000000002895f4
- (void)dealloc;	// IMP=0x0000000000289597
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000289535
- (id)init;	// IMP=0x000000000028951f
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000288e02
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000288d6e

@end

