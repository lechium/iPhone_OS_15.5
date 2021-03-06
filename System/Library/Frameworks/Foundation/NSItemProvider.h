//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, NSUUID;
@protocol NSItemProviderDataTransferDelegate, _NSItemProviderLoading;

@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying>
{
    CDUnknownBlockType _previewImageHandler;	// 8 = 0x8
    NSMutableDictionary *_metadata;	// 16 = 0x10
    id <_NSItemProviderLoading> _loadOperator;	// 24 = 0x18
    NSMutableDictionary *_representationByType;	// 32 = 0x20
    NSMutableOrderedSet *_typeOrder;	// 40 = 0x28
    NSArray *_representations;	// 48 = 0x30
    NSMutableDictionary *_preferredRepresentationByType;	// 56 = 0x38
    NSUUID *_UUID;	// 64 = 0x40
    NSString *_suggestedName;	// 72 = 0x48
    NSString *_sanitizedSuggestedName;	// 80 = 0x50
    NSDictionary *_userInfo;	// 88 = 0x58
    id <NSItemProviderDataTransferDelegate> _dataTransferDelegate;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011d7f6
- (void).cxx_destruct;	// IMP=0x000000000011df8d
@property __weak id <NSItemProviderDataTransferDelegate> dataTransferDelegate; // @synthesize dataTransferDelegate=_dataTransferDelegate;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSUUID *_UUID; // @synthesize _UUID;
@property(retain, nonatomic) NSMutableDictionary *_preferredRepresentationByType; // @synthesize _preferredRepresentationByType;
@property(readonly) NSArray *_representations; // @synthesize _representations;
@property(retain, nonatomic) NSMutableOrderedSet *_typeOrder; // @synthesize _typeOrder;
@property(retain, nonatomic) NSMutableDictionary *_representationByType; // @synthesize _representationByType;
@property(retain) id <_NSItemProviderLoading> _loadOperator; // @synthesize _loadOperator;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011dd68
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011d7fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011d69a
- (void)_loadItemOfClass:(Class)arg1 withLoadHandler:(CDUnknownBlockType)arg2 options:(id)arg3 coerceForCoding:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000011d4ff
- (void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000011d42a
- (void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000011c409
- (void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011c16f
- (void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011bd5b
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x000000000011bbde
- (id)initWithItem:(id)arg1 typeIdentifier:(id)arg2;	// IMP=0x000000000011bb21
- (_Bool)hasItemConformingToTypeIdentifier:(id)arg1;	// IMP=0x000000000011bb0d
- (id)description;	// IMP=0x000000000011ba73
- (id)_loadObjectOfClass:(Class)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011ab60
- (id)loadObjectOfClass:(Class)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011ab49
- (_Bool)canLoadObjectOfClass:(Class)arg1;	// IMP=0x000000000011a816
- (void)registerObjectOfClass:(Class)arg1 visibility:(long long)arg2 loadHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000119f2e
- (void)registerObject:(id)arg1 visibility:(long long)arg2;	// IMP=0x00000000001199fc
- (id)initWithObject:(id)arg1;	// IMP=0x00000000001199c0
- (id)loadInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000118ef6
- (id)loadFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000118375
- (id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011797b
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 visibility:(long long)arg3 loadHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000117238
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001170f1
- (_Bool)hasRepresentationConformingToTypeIdentifier:(id)arg1 fileOptions:(long long)arg2;	// IMP=0x0000000000116f12
@property(readonly, copy) NSArray *registeredTypeIdentifiers; // @dynamic registeredTypeIdentifiers;
- (id)registeredTypeIdentifiersWithFileOptions:(long long)arg1;	// IMP=0x0000000000116eb5
@property(readonly, copy) NSString *_sanitizedSuggestedName; // @synthesize _sanitizedSuggestedName;
@property(copy) NSString *suggestedName; // @synthesize suggestedName=_suggestedName;
- (void)_setMetadataValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000116d8f
- (id)_metadataValueForKey:(id)arg1;	// IMP=0x0000000000116d79
- (id)_representationForType:(id)arg1;	// IMP=0x0000000000116d48
- (void)_setItemRepresentation:(id)arg1;	// IMP=0x0000000000116c6a
- (id)_representationConformingToType:(id)arg1;	// IMP=0x0000000000116bfb
- (id)representations;	// IMP=0x0000000000116be5
- (void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(CDUnknownBlockType)arg3;	// IMP=0x0000000000116ace
- (void)_addRepresentationType_v2:(id)arg1 preferredRepresentation:(long long)arg2 loader:(CDUnknownBlockType)arg3;	// IMP=0x0000000000116ab6
- (void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 visibility:(long long)arg3 loader:(CDUnknownBlockType)arg4;	// IMP=0x0000000000116a34
- (id)_availableTypesWithFilterBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011689c
- (_Bool)_hasRepresentationConformingToType:(id)arg1;	// IMP=0x0000000000116796
- (_Bool)_hasRepresentationOfType:(id)arg1;	// IMP=0x0000000000116765
- (id)_availableTypes;	// IMP=0x0000000000116731
- (void)dealloc;	// IMP=0x0000000000116685
- (id)init;	// IMP=0x0000000000116611
- (void)_commonInitGenerateUUID:(_Bool)arg1;	// IMP=0x00000000001165aa
- (void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011dfda
@property(copy) CDUnknownBlockType previewImageHandler; // @dynamic previewImageHandler;

@end

