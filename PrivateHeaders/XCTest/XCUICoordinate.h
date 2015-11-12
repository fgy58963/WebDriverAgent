// Copyright 2004-present Facebook. All Rights Reserved.

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class XCUIElement;

@interface XCUICoordinate : NSObject <NSCopying>
{
    XCUIElement *_element;
    XCUICoordinate *_coordinate;
    CGVector _normalizedOffset;
    CGVector _pointsOffset;
}
@property (atomic, readonly) CGVector pointsOffset;
@property (atomic, readonly) CGVector normalizedOffset;
@property (atomic, readonly) XCUICoordinate *coordinate;
@property (atomic, readonly) XCUIElement *element;
@property (atomic, readonly) CGPoint screenPoint;
@property (atomic, readonly) XCUIElement *referencedElement;

- (instancetype)initWithCoordinate:(XCUICoordinate *)coordinate pointsOffset:(CGVector)pointsOffset;
- (instancetype)initWithElement:(XCUIElement *)element normalizedOffset:(CGVector)normalizedOffset;

- (void)pressForDuration:(double)arg1 thenDragToCoordinate:(id)arg2;
- (void)pressForDuration:(double)arg1;
- (void)doubleTap;
- (void)tap;
- (id)coordinateWithOffset:(CGVector)arg1;

@end
