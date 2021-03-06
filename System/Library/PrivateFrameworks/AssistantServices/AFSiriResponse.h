//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface AFSiriResponse : NSObject <NSSecureCoding>
{
    NSUUID *_requestIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001362a2
- (void).cxx_destruct;	// IMP=0x000000000013635a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001362cd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001362aa
- (_Bool)_isForRequest:(id)arg1;	// IMP=0x000000000013624b
- (id)_initWithRequest:(id)arg1;	// IMP=0x00000000001361f5
- (id)_initWithRequestIdentifier:(id)arg1;	// IMP=0x0000000000136182

@end

