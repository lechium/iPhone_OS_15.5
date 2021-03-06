//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagementTools/NSObject-Protocol.h>

@class NSString;

@protocol DMTRemoteSetupBroadcasting <NSObject>
@property(copy, nonatomic) CDUnknownBlockType pairedTransportHandler;
@property(copy, nonatomic) CDUnknownBlockType showErrorHandler;
@property(copy, nonatomic) CDUnknownBlockType showPinHandler;
@property(readonly, nonatomic) NSString *displayedPin;
@property(readonly, nonatomic) _Bool isInvalidated;
@property(readonly, nonatomic) _Bool isBroadcasting;
- (void)invalidate;
- (void)startBroadcasting;
@end

