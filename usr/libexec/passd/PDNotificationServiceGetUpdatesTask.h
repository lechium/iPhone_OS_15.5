//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDNotificationServiceGetUpdatesTask
{
    _Bool _initialUpdatesTask;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000236488
+ (id)getUpdatesTaskWithNotificationService:(id)arg1;	// IMP=0x00100000002363ee
@property(nonatomic, getter=isInitialUpdatesTask) _Bool initialUpdatesTask; // @synthesize initialUpdatesTask=_initialUpdatesTask;
- (void)reportUnexpectedResponseCode:(long long)arg1;	// IMP=0x00100000002374c5
- (void)reportAuthenticationFailure;	// IMP=0x001000000023747b
- (id)_resultFromResponseData:(id)arg1;	// IMP=0x0010000000236d99
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x0010000000236cd5
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x0010000000236ca7
- (id)description;	// IMP=0x0010000000236b44
- (void)handleError:(id)arg1;	// IMP=0x0010000000236a78
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x00100000002368c5
- (id)method;	// IMP=0x00100000002368b8
- (id)bodyDictionary;	// IMP=0x00100000002368b0
- (id)queryFields;	// IMP=0x00100000002367e4
- (id)endpointComponents;	// IMP=0x00100000002366bf
- (id)headerFields;	// IMP=0x00100000002365f6
- (long long)taskType;	// IMP=0x00100000002365eb
- (_Bool)isValid;	// IMP=0x0010000000236587
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000236509
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000236490
- (id)initWithNotificationService:(id)arg1;	// IMP=0x0010000000236437

@end

