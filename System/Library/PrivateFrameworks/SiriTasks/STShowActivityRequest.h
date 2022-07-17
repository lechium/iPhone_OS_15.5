//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriRequest.h>

@interface STShowActivityRequest : AFSiriRequest
{
    long long _dataType;	// 8 = 0x8
    long long _view;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000082c8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000836f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000082d0
- (id)createResponse;	// IMP=0x0000000000008292
- (long long)view;	// IMP=0x0000000000008281
- (long long)dataType;	// IMP=0x0000000000008270
- (id)_initWithDataType:(long long)arg1 view:(long long)arg2;	// IMP=0x000000000000821a

@end
