//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailing/NSCopying-Protocol.h>
#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@class FPItem, FPSandboxingURLWrapper, NSData, NSDate, NSDictionary, NSError, NSString, NSURL, NSUUID, QLCacheBasicVersionedFileIdentifier, QLCacheFileProviderVersionedFileIdentifier, QLThumbnailRepresentation, UTType;

@interface QLThumbnailGenerationRequest : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _iconMode;	// 8 = 0x8
    _Bool _wantsBaseline;	// 9 = 0x9
    _Bool _shouldUseRestrictedExtension;	// 10 = 0xa
    _Bool _cancelled;	// 11 = 0xb
    _Bool _finished;	// 12 = 0xc
    _Bool _downloadingAllowed;	// 13 = 0xd
    int _interpolationQuality;	// 16 = 0x10
    NSString *_contentTypeUTI;	// 24 = 0x18
    double _minimumDimension;	// 32 = 0x20
    double _scale;	// 40 = 0x28
    unsigned long long _representationTypes;	// 48 = 0x30
    FPSandboxingURLWrapper *_quicklookSandboxWrapper;	// 56 = 0x38
    FPSandboxingURLWrapper *_genericSandboxWrapper;	// 64 = 0x40
    FPSandboxingURLWrapper *_parentDirectorySandboxWrapper;	// 72 = 0x48
    NSURL *_fileURL;	// 80 = 0x50
    FPItem *_item;	// 88 = 0x58
    NSData *_data;	// 96 = 0x60
    NSUUID *_uuid;	// 104 = 0x68
    QLCacheBasicVersionedFileIdentifier *_basicFileIdentifier;	// 112 = 0x70
    QLCacheFileProviderVersionedFileIdentifier *_fileProviderFileIdentifier;	// 120 = 0x78
    unsigned long long _badgeType;	// 128 = 0x80
    long long _iconVariant;	// 136 = 0x88
    long long _generationBehavior;	// 144 = 0x90
    NSError *_requestIsInvalidError;	// 152 = 0x98
    NSDictionary *_externalThumbnailGeneratorData;	// 160 = 0xa0
    unsigned long long _externalThumbnailGeneratorDataHash;	// 168 = 0xa8
    NSDate *_beginDate;	// 176 = 0xb0
    QLThumbnailRepresentation *_mostRepresentativeThumbnail;	// 184 = 0xb8
    CDUnknownBlockType _updateBlock;	// 192 = 0xc0
    CDUnknownBlockType _completionBlock;	// 200 = 0xc8
    CDUnknownBlockType _statusBlock;	// 208 = 0xd0
    FPSandboxingURLWrapper *_saveURLSandboxWrapper;	// 216 = 0xd8
    NSString *_saveURLContentType;	// 224 = 0xe0
    unsigned long long _typesForWhichUpdateBlockHasBeenCalled;	// 232 = 0xe8
    NSString *_overriddenContentType;	// 240 = 0xf0
    struct CGSize _size;	// 248 = 0xf8
}

+ (id)customExtensionCommunicationEncodedClasses;	// IMP=0x00000000000069d2
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000607f
+ (id)_basicFileIdentifierForURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005fb6
+ (id)_fileProviderFileIdentifierForFPItem:(id)arg1;	// IMP=0x0000000000005edd
+ (id)requestWithThumbnailRequest:(id)arg1;	// IMP=0x000000000000535b
- (void).cxx_destruct;	// IMP=0x0000000000008410
@property(retain, nonatomic) NSString *overriddenContentType; // @synthesize overriddenContentType=_overriddenContentType;
@property(nonatomic) unsigned long long typesForWhichUpdateBlockHasBeenCalled; // @synthesize typesForWhichUpdateBlockHasBeenCalled=_typesForWhichUpdateBlockHasBeenCalled;
@property(copy, nonatomic) NSString *saveURLContentType; // @synthesize saveURLContentType=_saveURLContentType;
@property(nonatomic, getter=isDownloadingAllowed) _Bool downloadingAllowed; // @synthesize downloadingAllowed=_downloadingAllowed;
@property(retain, nonatomic) FPSandboxingURLWrapper *saveURLSandboxWrapper; // @synthesize saveURLSandboxWrapper=_saveURLSandboxWrapper;
@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail; // @synthesize mostRepresentativeThumbnail=_mostRepresentativeThumbnail;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool shouldUseRestrictedExtension; // @synthesize shouldUseRestrictedExtension=_shouldUseRestrictedExtension;
@property(nonatomic) unsigned long long externalThumbnailGeneratorDataHash; // @synthesize externalThumbnailGeneratorDataHash=_externalThumbnailGeneratorDataHash;
@property(retain, nonatomic) NSDictionary *externalThumbnailGeneratorData; // @synthesize externalThumbnailGeneratorData=_externalThumbnailGeneratorData;
@property(retain, nonatomic) NSError *requestIsInvalidError; // @synthesize requestIsInvalidError=_requestIsInvalidError;
@property(nonatomic) int interpolationQuality; // @synthesize interpolationQuality=_interpolationQuality;
@property(nonatomic) long long generationBehavior; // @synthesize generationBehavior=_generationBehavior;
@property(nonatomic) _Bool wantsBaseline; // @synthesize wantsBaseline=_wantsBaseline;
@property(nonatomic) long long iconVariant; // @synthesize iconVariant=_iconVariant;
@property(nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property(retain, nonatomic) QLCacheFileProviderVersionedFileIdentifier *fileProviderFileIdentifier; // @synthesize fileProviderFileIdentifier=_fileProviderFileIdentifier;
@property(retain, nonatomic) QLCacheBasicVersionedFileIdentifier *basicFileIdentifier; // @synthesize basicFileIdentifier=_basicFileIdentifier;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) FPItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) FPSandboxingURLWrapper *parentDirectorySandboxWrapper; // @synthesize parentDirectorySandboxWrapper=_parentDirectorySandboxWrapper;
@property(retain, nonatomic) FPSandboxingURLWrapper *genericSandboxWrapper; // @synthesize genericSandboxWrapper=_genericSandboxWrapper;
@property(retain, nonatomic) FPSandboxingURLWrapper *quicklookSandboxWrapper; // @synthesize quicklookSandboxWrapper=_quicklookSandboxWrapper;
@property(nonatomic) unsigned long long representationTypes; // @synthesize representationTypes=_representationTypes;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool iconMode; // @synthesize iconMode=_iconMode;
@property(nonatomic) double minimumDimension; // @synthesize minimumDimension=_minimumDimension;
- (void)noteUpdateBlockHasBeenCalledForType:(long long)arg1;	// IMP=0x000000000000807e
- (_Bool)isValid;	// IMP=0x0000000000007fea
- (_Bool)prepareForSending;	// IMP=0x0000000000007855
- (id)_stateDescription;	// IMP=0x00000000000077d5
- (id)description;	// IMP=0x00000000000072e7
- (unsigned long long)hash;	// IMP=0x0000000000007251
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006eee
- (id)copyWithSize:(struct CGSize)arg1;	// IMP=0x0000000000006ea2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006cd0
- (long long)compare:(id)arg1;	// IMP=0x0000000000006adf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000066bb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006087
- (id)equivalentFPItemRequestWithItem:(id)arg1 representationTypes:(unsigned long long)arg2;	// IMP=0x0000000000005d12
- (_Bool)resultShouldBeSavedToDisk;	// IMP=0x0000000000005b51
- (_Bool)isDataBased;	// IMP=0x0000000000005b43
- (_Bool)isFileBased;	// IMP=0x0000000000005ace
- (_Bool)isUbiquitous;	// IMP=0x0000000000005a9b
- (long long)requestedMostRepresentativeType;	// IMP=0x0000000000005a7c
- (_Bool)forceGeneration;	// IMP=0x0000000000005a62
- (_Bool)provideCachedResultsOnly;	// IMP=0x0000000000005a49
- (_Bool)provideFullResolutionThumbnail;	// IMP=0x0000000000005a3b
- (_Bool)provideLowQualityThumbnail;	// IMP=0x00000000000059fe
- (_Bool)provideGenericIcon;	// IMP=0x00000000000059df
@property(retain, nonatomic) NSString *contentTypeUTI; // @synthesize contentTypeUTI=_contentTypeUTI;
@property(copy, nonatomic) UTType *contentType;
- (float)maximumPixelSize;	// IMP=0x00000000000057a5
- (id)saveURL;	// IMP=0x000000000000578c
- (id)fileIdentifier;	// IMP=0x0000000000005772
- (void)setSaveURL:(id)arg1;	// IMP=0x0000000000005586
- (id)initWithData:(id)arg1 contentType:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4 representationTypes:(unsigned long long)arg5;	// IMP=0x0000000000005293
- (id)initWithFPItem:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 representationTypes:(unsigned long long)arg4;	// IMP=0x00000000000051cf
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 representationTypes:(unsigned long long)arg4;	// IMP=0x00000000000050c5
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 representationTypes:(unsigned long long)arg3;	// IMP=0x0000000000004d84
@property(readonly, nonatomic) long long mostRepresentativeTypeForWhichUpdateBlockHasBeenCalled;
- (_Bool)thumbnailRepresentationTypeMatchesRequestedMostRepresentativeType:(long long)arg1;	// IMP=0x0000000000003d86
- (void)markDidBegin;	// IMP=0x0000000000003d33
- (void)finish;	// IMP=0x0000000000003d1c
- (void)cancel;	// IMP=0x0000000000003d05

@end
