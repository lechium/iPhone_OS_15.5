//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@interface CADFilter : NSObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000552f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005529
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000054fa
- (id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4;	// IMP=0x00000000000054e4
- (_Bool)applicableToEntityType:(int)arg1;	// IMP=0x00000000000054dc
- (_Bool)validate;	// IMP=0x00000000000054d4

@end
