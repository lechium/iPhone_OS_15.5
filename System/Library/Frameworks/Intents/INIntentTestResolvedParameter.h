//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INExtensionContextSlotResolutionResult, INIntent, INIntentSlotDescription, NSArray, NSString;

@interface INIntentTestResolvedParameter : NSObject
{
    _Bool _resolveImplemented;	// 8 = 0x8
    NSString *_parameter;	// 16 = 0x10
    NSArray *_results;	// 24 = 0x18
    INExtensionContextSlotResolutionResult *_extensionContextResolutionResult;	// 32 = 0x20
    INIntent *_intent;	// 40 = 0x28
    INIntentSlotDescription *_slotDescription;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000017377b
@property(readonly, nonatomic) INIntentSlotDescription *slotDescription; // @synthesize slotDescription=_slotDescription;
@property(readonly, copy, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) INExtensionContextSlotResolutionResult *extensionContextResolutionResult; // @synthesize extensionContextResolutionResult=_extensionContextResolutionResult;
@property(readonly, nonatomic) _Bool resolveImplemented; // @synthesize resolveImplemented=_resolveImplemented;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, copy, nonatomic) NSString *parameter; // @synthesize parameter=_parameter;
- (id)dictionaryRepresentation;	// IMP=0x00000000001735ec
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x0000000000173510
- (id)description;	// IMP=0x00000000001734fc
- (id)initWithParameter:(id)arg1 forIntent:(id)arg2 extensionContextResolutionResult:(id)arg3;	// IMP=0x00000000001732b8

@end
