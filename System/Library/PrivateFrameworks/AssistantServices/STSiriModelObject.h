//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface STSiriModelObject : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000161638
- (void).cxx_destruct;	// IMP=0x00000000001616f4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000161663
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000161640
- (Class)_aceCollectionClass;	// IMP=0x0000000000161630
- (id)_aceContextObjectValue;	// IMP=0x0000000000161628
- (void)setIdentifier:(id)arg1;	// IMP=0x00000000001615fb
- (id)identifier;	// IMP=0x00000000001615ed

@end
