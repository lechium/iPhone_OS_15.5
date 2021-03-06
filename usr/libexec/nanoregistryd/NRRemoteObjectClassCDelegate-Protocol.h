//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NRRemoteObjectClassC, NRTermsEvent, NSDictionary, NSUUID;

@protocol NRRemoteObjectClassCDelegate <NSObject>
- (void)remoteObject:(NRRemoteObjectClassC *)arg1 receivedCheckTermsEvent:(NRTermsEvent *)arg2 fromIDSBTUUID:(NSUUID *)arg3 responseBlock:(void (^)(_Bool, NSError *))arg4;
- (void)remoteObject:(NRRemoteObjectClassC *)arg1 receivedAddTermsEvent:(NRTermsEvent *)arg2 fromIDSBTUUID:(NSUUID *)arg3 responseBlock:(void (^)(NSError *))arg4;
- (void)remoteObject:(NRRemoteObjectClassC *)arg1 receivedPropertyRequestWithRequestIdentifier:(id)arg2 fromIDSBTUUID:(NSUUID *)arg3;
- (void)remoteObject:(NRRemoteObjectClassC *)arg1 receivedPropertyChanges:(NSDictionary *)arg2 isAllProperties:(_Bool)arg3 fromIDSBTUUID:(NSUUID *)arg4;
@end

