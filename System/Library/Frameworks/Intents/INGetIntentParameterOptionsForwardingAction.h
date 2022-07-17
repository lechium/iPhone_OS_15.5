//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface INGetIntentParameterOptionsForwardingAction
{
    NSString *_parameterName;	// 8 = 0x8
    NSString *_searchTerm;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b7a14
+ (Class)responseClass;	// IMP=0x00000000000b7a03
- (void).cxx_destruct;	// IMP=0x00000000000b794c
@property(readonly, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(readonly, nonatomic) NSString *parameterName; // @synthesize parameterName=_parameterName;
- (CDUnknownBlockType)_completionHandlerWithActionCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b78a7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b77af
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b7710
- (void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b761e
- (_Bool)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b74a9
- (id)initWithIntent:(id)arg1 parameterName:(id)arg2 searchTerm:(id)arg3;	// IMP=0x00000000000b73dc

@end
