//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PaymentUI/CNContactPickerDelegate-Protocol.h>
#import <PaymentUI/UINavigationControllerDelegate-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV9PaymentUI23ContactPickerController11Coordinator : NSObject <CNContactPickerDelegate, UINavigationControllerDelegate>
{
    MISSING_TYPE *parent;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e2980
- (id)init;	// IMP=0x00000000000e2920
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x00000000000e23c0
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;	// IMP=0x00000000000e22e0
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x00000000000e22c0

@end
