//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PSYSyncSession;

@interface PSYSyncSessionUpdate : NSObject
{
    PSYSyncSession *_originalSession;	// 8 = 0x8
    PSYSyncSession *_updatedSession;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b452
@property(readonly, nonatomic) PSYSyncSession *updatedSession; // @synthesize updatedSession=_updatedSession;
@property(readonly, nonatomic) PSYSyncSession *originalSession; // @synthesize originalSession=_originalSession;
- (_Bool)didUpdateCompleteSyncSession;	// IMP=0x000000000000b3fd
- (void)enumerateNewlyCompletedActivitiesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b2e8
- (void)enumerateNewlyRunningActivitiesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b1bd
- (void)enumerateChangedActivitiesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b016
- (id)initWithOriginalSession:(id)arg1 updatedSession:(id)arg2;	// IMP=0x000000000000af7d

@end
