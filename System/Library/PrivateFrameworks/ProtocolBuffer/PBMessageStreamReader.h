//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInputStream;

@interface PBMessageStreamReader : NSObject
{
    NSInputStream *_stream;	// 8 = 0x8
    Class _classOfNextMessage;	// 16 = 0x10
    unsigned long long _position;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000a041
@property(readonly, nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) Class classOfNextMessage; // @synthesize classOfNextMessage=_classOfNextMessage;
- (id)nextMessage;	// IMP=0x0000000000009e29
- (id)initWithStream:(id)arg1;	// IMP=0x0000000000009dbe

@end
