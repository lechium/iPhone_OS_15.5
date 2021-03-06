//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFRequestInfo, NSDictionary, NSNumber;

@interface SiriContinuityContext
{
    NSNumber *_isTemporaryDevice;	// 8 = 0x8
    AFRequestInfo *_requestInfo;	// 16 = 0x10
    NSDictionary *_userActivity;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000038c18
- (void).cxx_destruct;	// IMP=0x0000000000038f51
@property(readonly, nonatomic) NSDictionary *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, nonatomic) AFRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000038e3d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038c20
- (id)description;	// IMP=0x0000000000038b4e
- (_Bool)isTemporaryDevice;	// IMP=0x0000000000038b31
- (id)speechRequestOptions;	// IMP=0x0000000000038ac9
- (id)initWithUserActivity:(id)arg1;	// IMP=0x0000000000038a5b
- (id)initWithRequestInfo:(id)arg1;	// IMP=0x000000000003883c
- (id)initWithSpeechRequestOptions:(id)arg1;	// IMP=0x0000000000038673

@end

