//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface UIDropProposal : NSObject <NSCopying>
{
    _Bool _precise;	// 8 = 0x8
    _Bool _prefersFullSizePreview;	// 9 = 0x9
    unsigned long long _operation;	// 16 = 0x10
    long long _preferredBadgeStyle;	// 24 = 0x18
}

+ (id)new;	// IMP=0x00000000005e0a3b
@property(nonatomic, getter=_preferredBadgeStyle, setter=_setPreferredBadgeStyle:) long long preferredBadgeStyle; // @synthesize preferredBadgeStyle=_preferredBadgeStyle;
@property(nonatomic) _Bool prefersFullSizePreview; // @synthesize prefersFullSizePreview=_prefersFullSizePreview;
@property(nonatomic, getter=isPrecise) _Bool precise; // @synthesize precise=_precise;
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005e0ab8
- (id)init;	// IMP=0x00000000005e09b4
- (id)initWithDropOperation:(unsigned long long)arg1;	// IMP=0x00000000005e0973

@end

