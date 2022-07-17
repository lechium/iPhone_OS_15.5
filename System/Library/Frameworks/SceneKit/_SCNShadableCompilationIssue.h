//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCNShadable;

@interface _SCNShadableCompilationIssue : NSObject
{
    id <SCNShadable> _shadable;	// 8 = 0x8
    NSString *_entryPoint;	// 16 = 0x10
    NSString *_effectiveModifier;	// 24 = 0x18
    NSString *_message;	// 32 = 0x20
    unsigned long long _type;	// 40 = 0x28
    long long _line;	// 48 = 0x30
}

+ (id)issueWithShadable:(id)arg1 entryPoint:(id)arg2 effectiveModifier:(id)arg3 message:(id)arg4 line:(long long)arg5 type:(unsigned long long)arg6;	// IMP=0x00000000002eca04
@property(readonly, nonatomic) long long line; // @synthesize line=_line;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *effectiveModifier; // @synthesize effectiveModifier=_effectiveModifier;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) id <SCNShadable> shadable; // @synthesize shadable=_shadable;
- (void)dealloc;	// IMP=0x00000000002eca88

@end
