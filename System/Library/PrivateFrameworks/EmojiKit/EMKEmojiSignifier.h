//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmojiKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EMKEmojiSignifier : NSObject <NSCopying>
{
    NSString *_string;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003add
- (id)description;	// IMP=0x0000000000003a57
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003a4c
@property(readonly) NSString *string;
- (id)initWithString:(id)arg1;	// IMP=0x00000000000039c2

@end
