//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface UIFocusEffect : NSObject <NSCopying>
{
    _Bool __isDefaultEffect;	// 8 = 0x8
}

+ (id)effect;	// IMP=0x0000000000c90400
@property(readonly, nonatomic) _Bool _isDefaultEffect; // @synthesize _isDefaultEffect=__isDefaultEffect;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c90452
- (_Bool)__isHaloEffect;	// IMP=0x0000000000c9044a
- (id)init;	// IMP=0x0000000000c90412

@end

