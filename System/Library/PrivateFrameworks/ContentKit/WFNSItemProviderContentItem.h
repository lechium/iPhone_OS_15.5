//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@class NSItemProvider, NSString, WFFileType;

@interface WFNSItemProviderContentItem <WFContentItemClass>
{
    _Bool _useNewLoadingAPI;	// 8 = 0x8
    NSString *_contentName;	// 16 = 0x10
    WFFileType *_fileURLType;	// 24 = 0x18
}

+ (id)countDescription;	// IMP=0x0000000000107cbf
+ (id)pluralTypeDescription;	// IMP=0x0000000000107ca7
+ (id)typeDescription;	// IMP=0x0000000000107c8f
+ (id)contentCategories;	// IMP=0x0000000000107c28
+ (id)outputTypes;	// IMP=0x0000000000107c0f
+ (id)ownedTypes;	// IMP=0x0000000000107b93
+ (id)itemProviderTypeIdentifierOverridesWithFileURLType:(id)arg1;	// IMP=0x0000000000107850
+ (id)itemProviderTypeIdentifierOverrides;	// IMP=0x000000000010783c
- (void).cxx_destruct;	// IMP=0x00000000001065d5
@property(retain, nonatomic) WFFileType *fileURLType; // @synthesize fileURLType=_fileURLType;
@property(nonatomic) _Bool useNewLoadingAPI; // @synthesize useNewLoadingAPI=_useNewLoadingAPI;
@property(copy, nonatomic) NSString *contentName; // @synthesize contentName=_contentName;
- (void)preloadImportantItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000106293
- (_Bool)cachesSupportedTypes;	// IMP=0x000000000010628b
- (id)outputTypes;	// IMP=0x0000000000105eb5
- (id)name;	// IMP=0x0000000000105e5b
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;	// IMP=0x0000000000105b8d
- (void)generateObjectRepresentationWithNewAPI:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;	// IMP=0x0000000000105abe
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;	// IMP=0x00000000001058d4
- (void)generateFileRepresentationWithNewAPI:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;	// IMP=0x00000000001057b8
@property(readonly, nonatomic) NSItemProvider *itemProvider;

@end
