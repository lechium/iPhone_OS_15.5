//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, SGRealtimeEvent, SGRecordId;

@protocol _SGDSuggestManagerEventsConfirmRejectProtocol
- (void)waitForEventWithIdentifier:(NSString *)arg1 toAppearInEventStoreWithLastModificationDate:(NSDate *)arg2 completion:(void (^)(SGXPCResponse1 *))arg3;
- (void)deleteEventByRecordId:(SGRecordId *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)rejectEventByRecordId:(SGRecordId *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)confirmEventByRecordId:(SGRecordId *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)rejectEvent:(SGRealtimeEvent *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)confirmEvent:(SGRealtimeEvent *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
@end

