//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICCloudContext, NSManagedObjectContext;

@interface ICCollaborationController : NSObject
{
    ICCloudContext *_cloudContext;	// 8 = 0x8
    NSManagedObjectContext *_objectContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000067354
@property(retain, nonatomic) NSManagedObjectContext *objectContext; // @synthesize objectContext=_objectContext;
@property(retain, nonatomic) ICCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
- (void)acceptShareWithMetadata:(id)arg1 andFetchObjectWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066130
- (void)acceptShareWithMetadata:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065a0b
- (void)didStopSharing:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065587
- (id)objectForShare:(id)arg1 context:(id)arg2;	// IMP=0x00100000000653b2
- (void)saveServerShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000650a6
- (void)didSaveShare:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000064f2d
- (void)fetchShareIfNecessaryForObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000645db
- (void)saveShare:(id)arg1 withRootRecord:(id)arg2 object:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000634cf
- (void)saveShare:(id)arg1 forObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062efd
- (void)prepareShare:(id)arg1 forObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062a10
- (id)existingShareForObject:(id)arg1;	// IMP=0x001000000006230e
- (void)populateShare:(id)arg1 withObject:(id)arg2;	// IMP=0x00100000000620e1
- (id)newShareForObject:(id)arg1;	// IMP=0x0010000000061e3e
- (id)rootRecordForObject:(id)arg1;	// IMP=0x0010000000061d6f
- (void)createShareForObjectWithManagedObjectID:(id)arg1 appIconData:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000061593
- (id)fetchShareForObjectWithManagedObjectID:(id)arg1;	// IMP=0x00100000000612f3
- (id)initWithCloudContext:(id)arg1;	// IMP=0x001000000006128b

@end

