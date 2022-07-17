//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSActionResponder, FBSSceneSnapshotContext;

@interface FBSSceneSnapshotRequestHandle : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    FBSSceneSnapshotContext *_context;	// 16 = 0x10
    BSActionResponder *_responder;	// 24 = 0x18
    _Bool _canceled;	// 32 = 0x20
}

+ (id)handleForRequestType:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x0000000000053902
- (void).cxx_destruct;	// IMP=0x00000000000541bf
- (void)_clearAction;	// IMP=0x000000000005417d
- (void)cancelRequest;	// IMP=0x0000000000054090
- (void)performRequestForScene:(id)arg1;	// IMP=0x00000000000539ba
- (id)initWithRequestType:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x000000000005395a

@end
