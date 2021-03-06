//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EntityKey : NSObject
{
    int _elementId;	// 8 = 0x8
    int _edgeElementId;	// 12 = 0xc
    int _parentElementId;	// 16 = 0x10
}

@property int parentElementId; // @synthesize parentElementId=_parentElementId;
@property int edgeElementId; // @synthesize edgeElementId=_edgeElementId;
@property int elementId; // @synthesize elementId=_elementId;
- (unsigned long long)hash;	// IMP=0x0000000000034ea7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000034e40
- (_Bool)isEqualToEntityKey:(id)arg1;	// IMP=0x0000000000034da0
- (id)initWithElementId:(int)arg1 edgeElementId:(int)arg2 parentElementId:(int)arg3;	// IMP=0x0000000000034d4f

@end

