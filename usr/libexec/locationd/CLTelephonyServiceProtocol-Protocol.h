//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class NSDictionary, NSString;

@protocol CLTelephonyServiceProtocol <CLNotifierServiceProtocol>
- (void)sendNotificationToClients:(NSString *)arg1 notificationData:(NSDictionary *)arg2;
- (_Bool)syncgetServingGsmCell:(struct Cell *)arg1;
- (_Bool)syncgetServingCells:(void *)arg1 addNeighborCells:(_Bool)arg2;
- (void)dumpLogWithReason:(NSString *)arg1;
- (void)resetModemWithReason:(NSString *)arg1;
- (NSDictionary *)syncgetRegistrationInfoDictionary;
- (_Bool)syncgetSignalStrength:(int *)arg1;
- (_Bool)syncgetCopyServingProviderFromCarrierBundle:(id *)arg1;
- (_Bool)syncgetCopyServingProvider:(id *)arg1;
- (_Bool)syncgetCopyServingOperator:(id *)arg1;
- (_Bool)syncgetRefreshCellMonitor;
- (_Bool)syncgetActiveCall:(_Bool *)arg1;
- (int)syncgetCellTransmitStatus;
- (int)syncgetRegistrationStatus;
- (void)fetchSignalStrengthMeasurementsWithReply:(void (^)(NSArray *))arg1;
- (int)syncgetRadioAccessTechnology;
- (_Bool)syncgetIsRegisteredOnCell;
- (_Bool)syncgetDetectedCells:(void *)arg1;
- (void)fetchActiveOrHeldWithReply:(void (^)(_Bool))arg1;
- (void)fetchIsCellAvailableWithReply:(void (^)(_Bool))arg1;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end
