//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfigurationUI/NSObject-Protocol.h>

@class NSSet;
@protocol DMCRFSnapshot;

@protocol DMCRFInteractionClient <NSObject>
- (void)doesUserWantToRestoreSnapshot:(id <DMCRFSnapshot>)arg1 withConflictingApps:(NSSet *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

