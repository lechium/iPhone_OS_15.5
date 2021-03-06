//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableArray;

@interface PLLibraryContentsEnumerator : NSObject
{
    NSMutableArray *_assetHandlerBlocks;	// 8 = 0x8
    NSMutableArray *_resourceHandlerBlocks;	// 16 = 0x10
    NSMutableArray *_conversationHandlerBlocks;	// 24 = 0x18
    NSMutableArray *_faceHandlerBlocks;	// 32 = 0x20
    NSMutableArray *_endOfListHandlerBlocks;	// 40 = 0x28
    NSManagedObjectContext *_sourceContext;	// 48 = 0x30
    _Bool _concurrent;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004d1a3c
@property(readonly, nonatomic) _Bool concurrent; // @synthesize concurrent=_concurrent;
@property(readonly, nonatomic) NSManagedObjectContext *sourceContext; // @synthesize sourceContext=_sourceContext;
- (_Bool)processObjectsWithError:(id *)arg1;	// IMP=0x00000000004d166c
- (id)_setupConversationController;	// IMP=0x00000000004d13d9
- (id)_setupAssetResourceFaceController;	// IMP=0x00000000004d1130
- (void)addEndOfListVisitor:(CDUnknownBlockType)arg1;	// IMP=0x00000000004d105f
- (void)addFaceVisitor:(CDUnknownBlockType)arg1;	// IMP=0x00000000004d0f8e
- (void)addConversationVisitor:(CDUnknownBlockType)arg1;	// IMP=0x00000000004d0ebd
- (void)addResourceVisitor:(CDUnknownBlockType)arg1;	// IMP=0x00000000004d0dec
- (void)addAssetVisitor:(CDUnknownBlockType)arg1;	// IMP=0x00000000004d0d1b
- (id)initWithSourceManagedObjectContext:(id)arg1 concurrent:(_Bool)arg2;	// IMP=0x00000000004d0b6b

@end

