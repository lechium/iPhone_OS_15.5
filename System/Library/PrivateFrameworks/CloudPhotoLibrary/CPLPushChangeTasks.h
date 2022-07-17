//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_tasksByType;	// 8 = 0x8
    NSMutableDictionary *_mutableTasksByType;	// 16 = 0x10
}

+ (id)descriptionForTaskType:(long long)arg1;	// IMP=0x0000000000110587
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011057f
- (void).cxx_destruct;	// IMP=0x000000000011012f
- (id)invalidRecordIdentifiers;	// IMP=0x00000000001100cc
- (id)invalidRecordScopedIdentifiers;	// IMP=0x0000000000110004
- (id)description;	// IMP=0x000000000010ff74
- (id)_descriptionFromTasksByType:(id)arg1;	// IMP=0x000000000010fe99
@property(readonly, nonatomic) _Bool hasTasks;
- (void)addTask:(long long)arg1 forRecordWithScopedIdentifier:(id)arg2;	// IMP=0x000000000010fc5f
- (void)enumerateTasksWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010fbd1
- (void)enumerateScopedTasksWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010fb26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010fabd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010fa63
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010f9bb
- (id)initEmpty;	// IMP=0x000000000010f98c
- (void)_commitTasks;	// IMP=0x000000000010f90a

@end
