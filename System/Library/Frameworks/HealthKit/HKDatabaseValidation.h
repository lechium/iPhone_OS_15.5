//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKDatabaseValidationClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HKDatabaseValidation : NSObject <_HKXPCExportable, HKDatabaseValidationClientInterface>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    HKHealthStore *_healthStore;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    HKTaskServerProxyProvider *_proxyProvider;	// 32 = 0x20
    CDUnknownBlockType _integrityErrorHandler;	// 40 = 0x28
    CDUnknownBlockType _validationErrorHandler;	// 48 = 0x30
    NSMutableDictionary *_integrityErrorHandlerDict;	// 56 = 0x38
    NSMutableDictionary *_validationErrorHandlerDict;	// 64 = 0x40
}

+ (id)serverInterface;	// IMP=0x0000000000077e2f
+ (id)clientInterface;	// IMP=0x0000000000077e0f
- (void).cxx_destruct;	// IMP=0x00000000000781b5
- (void)clientRemote_synchronizeWithCompletion:(CDUnknownBlockType)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000000780d9
- (void)clientRemote_processValidationError:(id)arg1 errorHandlerIdentifier:(id)arg2;	// IMP=0x0000000000077fef
- (void)clientRemote_processIntegrityErrorString:(id)arg1 errorHandlerIdentifier:(id)arg2;	// IMP=0x0000000000077f05
- (void)connectionInvalidated;	// IMP=0x0000000000077e81
- (id)remoteInterface;	// IMP=0x0000000000077e68
- (id)exportedInterface;	// IMP=0x0000000000077e4f
- (void)validateEntitiesWithIdentifier:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000077b80
- (void)performIntegrityCheckOnDatabase:(long long)arg1 identifier:(id)arg2 errorHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000778c4
- (id)initWithHealthStore:(id)arg1;	// IMP=0x0000000000077795

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
