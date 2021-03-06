//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _ACComponentWrapper : NSObject <NSSecureCoding>
{
    struct shared_ptr<APComponent> mComponent;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000dbb9b
- (id).cxx_construct;	// IMP=0x00000000000dc888
- (void).cxx_destruct;	// IMP=0x00000000000dc87a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dbe6c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dbbfa
- (id)initWithComponent:(void *)arg1;	// IMP=0x00000000000dbba3

@end

