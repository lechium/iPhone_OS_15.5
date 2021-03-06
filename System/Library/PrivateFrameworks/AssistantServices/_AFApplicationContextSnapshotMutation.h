//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFApplicationContextSnapshotMutating-Protocol.h>

@class AFApplicationContextSnapshot, NSArray, NSString;

@interface _AFApplicationContextSnapshotMutation : NSObject <AFApplicationContextSnapshotMutating>
{
    AFApplicationContextSnapshot *_baseModel;	// 8 = 0x8
    NSArray *_applicationContexts;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasApplicationContexts:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000014b7b5
- (id)generate;	// IMP=0x000000000014b708
- (void)setApplicationContexts:(id)arg1;	// IMP=0x000000000014b6e8
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000014b67d
- (id)init;	// IMP=0x000000000014b669

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

