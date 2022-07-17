//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PDNotificationService;

@interface PDNotificationServiceConnectionTask
{
    PDNotificationService *_notificationService;	// 8 = 0x8
    long long _taskType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000233388
- (void).cxx_destruct;	// IMP=0x002000000023455a
@property(readonly, nonatomic) long long taskType; // @synthesize taskType=_taskType;
@property(retain, nonatomic) PDNotificationService *notificationService; // @synthesize notificationService=_notificationService;
- (_Bool)pertainsToNotificationService:(id)arg1;	// IMP=0x00100000002344ad
- (_Bool)matchesTask:(id)arg1;	// IMP=0x00100000002341ac
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x0010000000234138
- (unsigned long long)numberOfBackoffLevels;	// IMP=0x0010000000234128
- (const CDStruct_316206b0 *)backoffLevels;	// IMP=0x001000000023411b
- (id)bodyDictionary;	// IMP=0x0010000000234113
- (id)headerFields;	// IMP=0x0010000000233fdf
- (id)queryFields;	// IMP=0x0010000000233fd7
- (id)endpointComponents;	// IMP=0x0010000000233fcf
- (id)method;	// IMP=0x0010000000233fc7
- (id)request;	// IMP=0x00100000002334c6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000023342b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000233390
- (id)initWithNotificationService:(id)arg1;	// IMP=0x001000000023331a

@end
