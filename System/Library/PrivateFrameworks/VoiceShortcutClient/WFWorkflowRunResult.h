//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSSecureCoding-Protocol.h>

@class NSError;

@interface WFWorkflowRunResult : NSObject <NSSecureCoding>
{
    NSError *_error;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016d04
- (void).cxx_destruct;	// IMP=0x0000000000016cf4
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016c54
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016b7f
- (id)description;	// IMP=0x0000000000016add
- (id)initWithError:(id)arg1;	// IMP=0x0000000000016a5f
- (id)resultBySettingError:(id)arg1;	// IMP=0x0000000000016a0e
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;

@end

