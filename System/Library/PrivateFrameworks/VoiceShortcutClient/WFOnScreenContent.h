//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSSecureCoding-Protocol.h>

@class INFile, NSURL;

@interface WFOnScreenContent : NSObject <NSSecureCoding>
{
    NSURL *_URL;	// 8 = 0x8
    INFile *_file;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002e50c
- (void).cxx_destruct;	// IMP=0x000000000002e4e4
@property(readonly, nonatomic) INFile *file; // @synthesize file=_file;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e422
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e331
- (id)initWithURL:(id)arg1 file:(id)arg2;	// IMP=0x000000000002e21a

@end

