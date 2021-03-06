//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DMCEnrollmentProvider/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol DMCEnrollmentFlowMCBridge <NSObject>

@optional
- (void)unblockAppInstallsWithCompletion:(void (^)(NSError *))arg1;
- (void)blockAppInstallsWithCompletion:(void (^)(NSError *))arg1;
- (NSDictionary *)readEnrollmentDirtyState;
- (void)trackEnrollmentDirtyState:(NSDictionary *)arg1;
- (void)stopEnrollmentFlowMonitor;
- (void)requestEnrollmentFlowMonitorWithPersonaID:(NSString *)arg1;
- (void)reauthenticationComplete;
- (_Bool)isDeviceSharediPad;
- (_Bool)isDeviceSupervised;
- (_Bool)isDeviceMDMEnrolled;
- (_Bool)removeProfileAssociatedWithPersonaID:(NSString *)arg1;
- (void)removeProfileWithIdentifier:(NSString *)arg1 async:(_Bool)arg2;
- (void)installEnrollmentProfile:(NSData *)arg1 devicePasscode:(NSString *)arg2 personaID:(NSString *)arg3 rmAccountIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSString *, _Bool, NSError *))arg5;
- (NSDictionary *)detailsFromMDMProfile:(NSData *)arg1 error:(id *)arg2;
- (_Bool)isMDMProfileLocked;
- (NSString *)organizationFromMDMProfile:(NSData *)arg1 error:(id *)arg2;
- (NSString *)friendlyNameForMDMPayloadInProfile:(NSData *)arg1 error:(id *)arg2;
- (NSString *)assignedManagedAppleIDFromMDMProfile:(NSData *)arg1 error:(id *)arg2;
- (NSString *)profileIdentifierFromMDMProfile:(NSData *)arg1 error:(id *)arg2;
- (NSData *)getMachineInfoForEnrollmentType:(unsigned long long)arg1 enrollmentMethod:(unsigned long long)arg2;
- (_Bool)isDevicePasscodeSet;
@end

