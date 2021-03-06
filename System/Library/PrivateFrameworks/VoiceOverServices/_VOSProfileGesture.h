//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceOverServices/NSSecureCoding-Protocol.h>

@class VOSGesture, _VOSProfileCommand;

@interface _VOSProfileGesture : NSObject <NSSecureCoding>
{
    VOSGesture *_gesture;	// 8 = 0x8
    _VOSProfileCommand *_command;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e37a
+ (id)profileGestureWithStringValue:(id)arg1;	// IMP=0x000000000001e1e4
+ (id)profileGestureWithGesture:(id)arg1;	// IMP=0x000000000001e197
- (void).cxx_destruct;	// IMP=0x000000000001e5d4
@property(nonatomic) __weak _VOSProfileCommand *command; // @synthesize command=_command;
@property(retain, nonatomic) VOSGesture *gesture; // @synthesize gesture=_gesture;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e518
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e445
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e398
- (unsigned long long)hash;	// IMP=0x000000000001e382
- (id)description;	// IMP=0x000000000001e2b5
- (id)_initWithGesture:(id)arg1;	// IMP=0x000000000001e24a

@end

