//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol MFCorecipientsIndicatorAtomDelegate;

@interface MFCorecipientsIndicatorAtom
{
    _Bool _touchesWereCancelled;	// 16 = 0x10
    id <MFCorecipientsIndicatorAtomDelegate> _delegate;	// 24 = 0x18
    NSArray *_recipients;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006e1ca
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) __weak id <MFCorecipientsIndicatorAtomDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006e070
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006e046
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006df7d
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000006df50
- (id)initWithRecipients:(id)arg1;	// IMP=0x000000000006de9b
- (id)init;	// IMP=0x000000000006de4b

@end

