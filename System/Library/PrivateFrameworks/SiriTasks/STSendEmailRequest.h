//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriRequest.h>

@class STEmailMessage;

@interface STSendEmailRequest : AFSiriRequest
{
    STEmailMessage *_message;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a0c9
- (void).cxx_destruct;	// IMP=0x000000000000a1e9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a14e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a0d1
- (id)createResponse;	// IMP=0x000000000000a093
- (id)message;	// IMP=0x000000000000a07e
- (_Bool)_makeAppFrontmost;	// IMP=0x000000000000a076
- (id)_initWithMessage:(id)arg1;	// IMP=0x000000000000a008

@end
