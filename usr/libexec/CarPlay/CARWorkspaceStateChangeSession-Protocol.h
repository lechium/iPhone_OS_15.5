//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol CARWorkspaceState;

@protocol CARWorkspaceStateChangeSession <NSObject>
@property(nonatomic) __weak id owner;
- (void)invalidate;
- (void)setState:(id <CARWorkspaceState>)arg1;
@end

