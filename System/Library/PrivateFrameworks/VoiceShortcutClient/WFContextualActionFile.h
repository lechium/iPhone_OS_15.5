//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSSecureCoding-Protocol.h>

@class NSURL, UTType;

@interface WFContextualActionFile : NSObject <NSSecureCoding>
{
    NSURL *_fileURL;	// 8 = 0x8
    UTType *_type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001ca79
- (void).cxx_destruct;	// IMP=0x000000000001c7aa
@property(readonly, nonatomic) UTType *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c6b7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c5b7
- (id)description;	// IMP=0x000000000001c4ee
- (void)dispose;	// IMP=0x000000000001c438
- (id)initWithFileURL:(id)arg1 type:(id)arg2;	// IMP=0x000000000001c032

@end

