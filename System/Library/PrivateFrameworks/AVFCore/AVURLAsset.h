//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/AVContentKeyRecipient-Protocol.h>

@class AVAssetResourceLoader, AVURLAssetInternal, NSArray, NSString, NSURL;

@interface AVURLAsset <AVContentKeyRecipient>
{
    AVURLAssetInternal *_URLAsset;	// 16 = 0x10
}

+ (id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 assetLoggingIdentifier:(id)arg2 figAssetCreationFlags:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000027c81
+ (id)_initializationOptionsClasses;	// IMP=0x0000000000027b6c
+ (id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)arg1;	// IMP=0x000000000002793c
+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;	// IMP=0x00000000000278f2
+ (_Bool)isPlayableExtendedMIMEType:(id)arg1;	// IMP=0x000000000002789b
+ (id)audiovisualMIMETypes;	// IMP=0x0000000000027882
+ (id)audiovisualTypes;	// IMP=0x0000000000027869
+ (id)_UTTypes;	// IMP=0x0000000000027722
+ (id)_fileUTTypes;	// IMP=0x0000000000027337
+ (id)_streamingUTTypes;	// IMP=0x0000000000026e58
+ (id)_figMIMETypes;	// IMP=0x0000000000026cff
+ (id)_figFileUTIs;	// IMP=0x0000000000026ccd
+ (id)_figHFSFileTypes;	// IMP=0x0000000000026c9b
+ (id)_figFilePathExtensions;	// IMP=0x0000000000026c69
+ (id)_figFileMIMETypes;	// IMP=0x0000000000026c37
+ (id)_figStreamingMIMETypes;	// IMP=0x0000000000026c05
+ (id)_figStreamingUTIs;	// IMP=0x0000000000026bd3
+ (id)_avfValidationPlist;	// IMP=0x0000000000026b10
+ (id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1;	// IMP=0x000000000002aeae
+ (id)userInfoObjectForURLAsset:(id)arg1;	// IMP=0x000000000002ae6e
+ (void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2;	// IMP=0x000000000002ae59
+ (id)instanceIdentifierMapTable;	// IMP=0x000000000002acd7
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x000000000002c559
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;	// IMP=0x000000000002c346
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x000000000002c2ee
+ (id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000002c1b6
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1;	// IMP=0x000000000002c1ae
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002bfa2
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x000000000002bf4a
- (id)contentKeySpecifiersEligibleForPreloading;	// IMP=0x000000000002a693
- (_Bool)_requiresInProcessOperation;	// IMP=0x000000000002a668
- (unsigned long long)referenceRestrictions;	// IMP=0x000000000002a627
- (id)lyrics;	// IMP=0x000000000002a606
- (void)cancelLoading;	// IMP=0x000000000002a5bd
- (id)creationOptions;	// IMP=0x000000000002a5a8
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)_absoluteURL;	// IMP=0x000000000002a503
- (void)_tracksDidChange;	// IMP=0x000000000002a475
- (id)tracks;	// IMP=0x000000000002a2fc
- (Class)_classForTrackInspectors;	// IMP=0x000000000002a2db
- (Class)_classForAssetTracks;	// IMP=0x000000000002a2ca
- (Class)_classForFigAssetInspectorLoader;	// IMP=0x000000000002a2b9
- (struct OpaqueFigPlaybackItem *)_playbackItem;	// IMP=0x000000000002a298
- (struct OpaqueFigFormatReader *)_formatReader;	// IMP=0x000000000002a277
- (id)_assetInspector;	// IMP=0x000000000002a256
- (void)_setAssetInspectorLoader:(id)arg1;	// IMP=0x000000000002a189
- (id)_assetInspectorLoader;	// IMP=0x000000000002a174
- (id)description;	// IMP=0x000000000002a111
- (void)dealloc;	// IMP=0x0000000000029fdd
- (void)_removeFigAssetNotifications;	// IMP=0x0000000000029ee8
- (void)_addFigAssetNotifications;	// IMP=0x0000000000029dfb
- (void)_ensureAssetDownloadCache;	// IMP=0x000000000002994c
- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;	// IMP=0x00000000000298c6
- (id)initWithFileURL:(id)arg1 offset:(long long)arg2 length:(long long)arg3 options:(id)arg4;	// IMP=0x00000000000297b3
- (id)initWithURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000029232
- (id)init;	// IMP=0x0000000000027926
- (id)assetCache;	// IMP=0x000000000002a6dc
- (id)_managedAssetCache;	// IMP=0x000000000002a6b4
- (_Bool)_clientURLLoadingRepresentsAccurateNetworkStatistics;	// IMP=0x000000000002a972
- (_Bool)_shouldOptimizeAccessForLinearMoviePlayback;	// IMP=0x000000000002a931
- (id)SHA1Digest;	// IMP=0x000000000002a906
- (unsigned long long)downloadToken;	// IMP=0x000000000002a8e5
- (id)downloadDestinationURL;	// IMP=0x000000000002a8bd
- (id)originalNetworkContentURL;	// IMP=0x000000000002a89c
- (id)resolvedURL;	// IMP=0x000000000002a87b
- (id)_instanceIdentifier;	// IMP=0x000000000002a850
- (id)identifyingTag;	// IMP=0x000000000002a825
- (id)identifyingTagClass;	// IMP=0x000000000002a7fa
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, nonatomic) _Bool shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly, nonatomic) _Bool shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly, nonatomic) NSArray *variants;
- (id)_resourceLoaderWithRemoteHandlerContext:(id)arg1;	// IMP=0x000000000002aa4e
- (_Bool)_hasResourceLoaderDelegate;	// IMP=0x000000000002ab36
@property(readonly, nonatomic) AVAssetResourceLoader *resourceLoader;
- (void)_setUserInfoObject:(id)arg1;	// IMP=0x000000000002ad73
- (void)_removeUserInfoObject;	// IMP=0x000000000002ad4c
- (void)expire;	// IMP=0x000000000002bbd8
- (_Bool)_attachedToExternalContentKeySession;	// IMP=0x000000000002bb9b
- (id)contentKeySession;	// IMP=0x000000000002bb7a
- (int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(_Bool *)arg2;	// IMP=0x000000000002b860
@property(readonly, nonatomic) _Bool mayRequireContentKeysForMediaDataProcessing;
- (id)_installHandlerForNSURLSessionConfiguration:(id)arg1 queue:(id)arg2;	// IMP=0x000000000002bc2b
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c561
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c34e

@end

