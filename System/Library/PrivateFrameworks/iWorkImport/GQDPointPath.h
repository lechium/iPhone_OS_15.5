//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GQDPointPath
{
    int mType;	// 16 = 0x10
    struct CGPoint mPoint;	// 24 = 0x18
    struct CGSize mSize;	// 40 = 0x28
}

- (struct CGPath *)createBezierPath;	// IMP=0x000000000004bcf5
- (struct CGSize)size;	// IMP=0x000000000004bcdd
- (struct CGPoint)point;	// IMP=0x000000000004bcc5
- (int)type;	// IMP=0x000000000004bcb5
- (int)mapStrType:(struct __CFString *)arg1;	// IMP=0x000000000004c3b6
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x000000000004c351

@end

