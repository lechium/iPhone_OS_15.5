//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface INGetIntentParameterDefaultValueForwardingAction
{
    NSString *_parameterName;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014b365
+ (Class)responseClass;	// IMP=0x000000000014b354
- (void).cxx_destruct;	// IMP=0x000000000014b2bb
@property(readonly, copy, nonatomic) NSString *parameterName; // @synthesize parameterName=_parameterName;
- (CDUnknownBlockType)_completionHandlerWithActionCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000014b227
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014b162
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014b0e5
- (void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014b026
- (_Bool)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014af38
- (id)initWithIntent:(id)arg1 parameterName:(id)arg2;	// IMP=0x000000000014aeb4

@end
