//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AFSiriDebugUIRequest
{
    NSString *_message;	// 8 = 0x8
    _Bool _frontmost;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a02ca
- (void).cxx_destruct;	// IMP=0x00000000000a04b4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a039b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a02d2
- (_Bool)_makeAppFrontmost;	// IMP=0x00000000000a02ba
- (id)createResponse;	// IMP=0x00000000000a0284
- (id)message;	// IMP=0x00000000000a026f
- (id)initWithMessage:(id)arg1 makeAppFrontmost:(_Bool)arg2;	// IMP=0x00000000000a01e3

@end
