//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _WKElementAction : NSObject
{
    struct RetainPtr<NSString> _title;	// 8 = 0x8
    CDUnknownBlockType _actionHandler;	// 16 = 0x10
    CDUnknownBlockType _dismissalHandler;	// 24 = 0x18
    struct WeakObjCPtr<WKActionSheetAssistant> _defaultActionSheetAssistant;	// 32 = 0x20
    long long _type;	// 40 = 0x28
}

+ (long long)elementActionTypeForUIActionIdentifier:(id)arg1;	// IMP=0x00000000002bc9e4
+ (id)imageForElementActionType:(long long)arg1;	// IMP=0x00000000002bc916
+ (id)elementActionWithType:(long long)arg1;	// IMP=0x00000000002bc87a
+ (id)elementActionWithType:(long long)arg1 customTitle:(id)arg2;	// IMP=0x00000000002bc865
+ (id)_elementActionWithType:(long long)arg1 assistant:(id)arg2;	// IMP=0x00000000002bc84e
+ (id)_elementActionWithType:(long long)arg1 customTitle:(id)arg2 assistant:(id)arg3;	// IMP=0x00000000002bc1a5
+ (id)_elementActionWithType:(long long)arg1 title:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bc113
+ (id)elementActionWithType:(long long)arg1 title:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bc0fa
+ (id)elementActionWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bc06f
- (id).cxx_construct;	// IMP=0x00000000002bd003
- (void).cxx_destruct;	// IMP=0x00000000002bcfd2
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)uiActionForElementInfo:(id)arg1;	// IMP=0x00000000002bcbc0
- (void)runActionWithElementInfo:(id)arg1;	// IMP=0x00000000002bc8aa
- (void)_runActionWithElementInfo:(id)arg1 forActionSheetAssistant:(id)arg2;	// IMP=0x00000000002bc898
@property(readonly, nonatomic) NSString *title;
- (void)dealloc;	// IMP=0x00000000002bc025
- (id)_initWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2 type:(long long)arg3 assistant:(id)arg4;	// IMP=0x00000000002bbf82

@end
