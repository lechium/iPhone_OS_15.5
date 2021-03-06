//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ASCOfferMetadata : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000df46
+ (id)progressMetadataWithValue:(double)arg1;	// IMP=0x001000000000df0b
+ (id)indeterminateProgressMetadata;	// IMP=0x001000000000dee2
+ (id)redownloadMetadata;	// IMP=0x001000000000dec2
+ (id)placeholderMetadata;	// IMP=0x001000000000dea9
+ (id)iconMetadataWithImageName:(id)arg1 animationName:(id)arg2;	// IMP=0x001000000000de39
+ (id)textMetadataWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x001000000000ddc9
+ (id)emptyMetadata;	// IMP=0x001000000000ddb0
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(readonly, nonatomic, getter=isProgress) _Bool progress;
@property(readonly, nonatomic, getter=isIcon) _Bool icon;
@property(readonly, nonatomic, getter=isText) _Bool text;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000df83
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000df7d
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000df4e
- (id)init;	// IMP=0x001000000000dd85
- (id)_init;	// IMP=0x001000000000dd56

@end

