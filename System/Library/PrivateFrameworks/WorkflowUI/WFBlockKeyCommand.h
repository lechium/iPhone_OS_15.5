//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIKeyCommand.h>

@interface WFBlockKeyCommand : UIKeyCommand
{
    CDUnknownBlockType _block;	// 8 = 0x8
}

+ (id)commandWithTitle:(id)arg1 input:(id)arg2 modifierFlags:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b57aa
- (void).cxx_destruct;	// IMP=0x00000000001b5a18
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;

@end
