//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SSMetricsPurchaseEvent
{
}

@property(retain, nonatomic) NSString *transactionIdentifier;
@property(nonatomic) double responseStartTime;
@property(nonatomic) double responseEndTime;
@property(nonatomic) double requestStartTime;
- (void)addFieldsFromPurchaseResponse:(id)arg1;	// IMP=0x000000000017cf95
- (id)init;	// IMP=0x000000000017cf3f

@end

