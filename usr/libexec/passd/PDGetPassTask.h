//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PDPassUpdateContext;

@interface PDGetPassTask
{
    _Bool _userRequested;	// 16 = 0x10
    _Bool _serverRequested;	// 17 = 0x11
    PDPassUpdateContext *_context;	// 24 = 0x18
    long long _source;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000021dda6
+ (id)taskWithWebService:(id)arg1 updateContext:(id)arg2 source:(long long)arg3;	// IMP=0x001000000021dca1
- (void).cxx_destruct;	// IMP=0x002000000021f055
@property(nonatomic) _Bool serverRequested; // @synthesize serverRequested=_serverRequested;
@property(nonatomic) _Bool userRequested; // @synthesize userRequested=_userRequested;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) PDPassUpdateContext *context; // @synthesize context=_context;
- (id)_resultFromResponseData:(id)arg1;	// IMP=0x001000000021ebd5
- (_Bool)_matchesGetPassTask:(id)arg1;	// IMP=0x001000000021ea29
- (_Bool)_matchesPersonalizePassTask:(id)arg1;	// IMP=0x001000000021e87d
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x001000000021e7dd
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x001000000021e725
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x001000000021e6cf
- (id)description;	// IMP=0x001000000021e59e
- (void)handleError:(id)arg1;	// IMP=0x001000000021e570
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x001000000021e356
- (id)headerFields;	// IMP=0x001000000021e214
- (id)endpointComponents;	// IMP=0x001000000021e132
- (id)method;	// IMP=0x001000000021e125
- (_Bool)pertainsToPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x001000000021e04e
@property(readonly, nonatomic) NSString *serialNumber;
- (_Bool)isValid;	// IMP=0x001000000021df92
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000021deb3
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000021ddae
- (id)initWithWebService:(id)arg1 updateContext:(id)arg2 source:(long long)arg3;	// IMP=0x001000000021dd1c

@end
